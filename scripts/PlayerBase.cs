using Godot;
using System;
using Godot.Collections;

public partial class PlayerBase : CharacterBody3D
{
    // Character maximum run speed on the ground.
    [Export] 
    public float MoveSpeed = 8.0f;
    // Movement acceleration (how fast character achieve maximum speed)
    [Export]
    public float Acceleration = 4.0f;
    // Jump impulse
    [Export]
    public float JumpInitialImpulse = 12.0f;
    // Jump impulse when player keeps pressing jump
    [Export]
    public float JumpAdditionalForce = 4.5f;
    // Player model rotation speed
    [Export]
    public float RotationSpeed = 12.0f;
    // Minimum horizontal speed on the ground. This controls when the character's animation tree changes
    // between the idle and running states.
    [Export]
    public float StoppingSpeed = 1.0f;
    // Max throwback force after player takes a hit
    [Export] 
    public float MaxThrowbackForce = 15.0f;
    [Export] 
    public bool CanSwimDive = false;

    private Node3D _rotationRoot;
    private CameraController _cameraController;
    private ShapeCast3D _groundShapeCast;
    private CharacterSkin _characterSkin;
    private Vector3 _moveDirection = Vector3.Zero;
    private Vector3 _lastStrongDirection = Vector3.Forward;
    private float _gravity = -30.0f;
    private float _groundHeight = 0f;
    private Vector3 _startPosition;
    private bool _isOnFloorBuffer;
    private bool _isJustJumping;
    private Vector2 _movementVector;
    
    /// <summary>
    /// Ladder object
    /// </summary>
    private Ladder _ladder;

    /// <summary>
    /// Minimum angle for being able to use ladder 
    /// </summary>
    private const float UseLadderAngle = 0.75f;
    
    /// <summary>
    /// Is character touching ladder space. (that doesn't mean climbing)
    /// </summary>
    private bool _isTouchingLadder = false;
    
    /// <summary>
    /// Is character climbing in ladder
    /// </summary>
    private bool _isClimbingLadder = false;

    public override void _Ready()
    {
        _rotationRoot = GetNode<Node3D>("CharacterRotationRoot");
        _cameraController = GetNode<CameraController>("CameraController");
        _groundShapeCast = GetNode<ShapeCast3D>("GroundShapeCast");
        _characterSkin = GetNode<CharacterSkin>("CharacterRotationRoot/CharacterSkin");
        _startPosition = GlobalTransform.Origin;

        Input.MouseMode = Input.MouseModeEnum.Captured;
        _cameraController.Setup(this);
    }

    public override void _PhysicsProcess(double delta)
    {
        _movementVector = Input.GetVector("left", "right", "forward", "backward");
        
        // Calculate ground height for camera controller
        if (_groundShapeCast.GetCollisionCount() > 0)
        {
            // foreach(var collision_result in _ground_shapecast.CollisionResult)
            //     _ground_height = Mathf.Max(_ground_height, collision_result.point.y);

            _groundHeight = GlobalPosition.Y + _groundShapeCast.TargetPosition.Y;
        }
        else
            _groundHeight = GlobalPosition.Y + _groundShapeCast.TargetPosition.Y;
        if (GlobalPosition.Y < _groundHeight)
                _groundHeight = GlobalPosition.Y;
        
        // Get input and movement state
        _isJustJumping = Input.IsActionJustPressed("jump") && IsOnFloor();
        var isAirBoosting = Input.IsActionPressed("jump") && !IsOnFloor() && Velocity.Y > 0.0f;

        _isOnFloorBuffer = IsOnFloor();
        _moveDirection = GetCameraOrientedInput();
        
        // To not orient quickly to the last input, we save a last strong direction,
        // this also ensures a good normalized value for the rotation basis.
        if (_moveDirection.Length() > 0.2f)
            _lastStrongDirection = _moveDirection.Normalized();

        _lastStrongDirection = (_cameraController.GlobalTransform.Basis * Vector3.Back).Normalized();

        OrientCharacterToDirection(_lastStrongDirection, delta);

        if (_isTouchingLadder)
        {
            bool canClimbToLadder = CanClimbToLadder();

            _isClimbingLadder = canClimbToLadder;
        }
        
        if (_isClimbingLadder)
        {
            _cameraController.EnableCameraMovement(IsOnFloor());
        }
        
        // We separate out the y velocity to not interpolate on the gravity
        var yVelocity = Velocity.Y;
        var newVelocity = Velocity;
        newVelocity.Y = 0.0f;
        newVelocity = newVelocity.Lerp(_moveDirection * MoveSpeed, (float)(Acceleration * delta));
        if (_moveDirection.Length() == 0 && newVelocity.Length() < StoppingSpeed)
            newVelocity = Vector3.Zero;
        newVelocity.Y = yVelocity;

        newVelocity.Y += (float)(_gravity * delta);

        if (_isJustJumping)
            newVelocity.Y += JumpInitialImpulse;
        else if (isAirBoosting)
            newVelocity.Y += (float)(JumpAdditionalForce * delta);

        if (_isClimbingLadder)
        {
            newVelocity.X = 0;
            newVelocity.Y = 0;
            newVelocity.Z = 0;

            if (_movementVector.Y != 0)
            {
                newVelocity.Y = -_movementVector.Y * 3;
            }
        }
        
        Velocity = newVelocity;

        PlayAnimations();

        var positionBefore = GlobalPosition;
        MoveAndSlide();
        var positionAfter = GlobalPosition;
        
        // If velocity is not 0 but the difference of positions after move_and_slide is,
        // character might be stuck somewhere!
        var deltaPosition = positionAfter - positionBefore;
        var epsilon = 0.001f;
        if (deltaPosition.Length() < epsilon && Velocity.Length() > epsilon)
            GlobalPosition += GetWallNormal() * 0.1f;
    }

    private void ResetPosition()
    {
        var newTransform = Transform;
        newTransform.Origin = _startPosition;
        Transform = newTransform;
    }

    private Vector3 GetCameraOrientedInput()
    {
        var input = Vector3.Zero;
        // This is to ensure that diagonal input isn't stronger than axis aligned input
        input.X = -_movementVector.X * (float)Mathf.Sqrt(1.0 - _movementVector.Y * _movementVector.Y / 2.0f);
        input.Z = -_movementVector.Y * (float)Mathf.Sqrt(1.0 - _movementVector.X * _movementVector.X / 2.0f);

        input = _cameraController.GlobalTransform.Basis * input;
        input.Y = 0.0f;

        return input;
    }

    private void Damage(Vector3 _impact_point, Vector3 force)
    {
        // Always throws character up
        force.Y = Mathf.Abs(force.Y);
        Velocity = force.LimitLength(MaxThrowbackForce);
    }

    private void OrientCharacterToDirection(Vector3 direction, double delta)
    {
        var leftAxis = Vector3.Up.Cross(direction);
        var rotationBasis = new Basis(leftAxis, Vector3.Up, direction).GetRotationQuaternion();
        var modelScale = _rotationRoot.Transform.Basis.Scale;

        var newTransform = _rotationRoot.Transform;
        var quart = newTransform.Basis.GetRotationQuaternion();
        var slerp = quart.Slerp(rotationBasis, (float)(delta * RotationSpeed));
        var scaled = new Basis(slerp).Scaled(modelScale);
        newTransform.Basis = scaled;
        _rotationRoot.Transform = newTransform;
    }

    public void Dead()
    {
        GD.Print("PLAYER DED!");
    }

    public void SetLadderState(bool onLadder, Ladder ladder)
    {
        _ladder = ladder;
        _isTouchingLadder = onLadder;
        
        if (!onLadder)
        {
            _isClimbingLadder = false;
            _cameraController.EnableCameraMovement(true);
        }
    }

    /// <summary>
    /// Can character climb to ladder. Using when character is not in climbing state
    /// </summary>
    /// <returns>False - ignore ladder. True - climb it</returns>
    private bool CanClimbToLadder()
    {
        if (_ladder == null)
            return false;
        
        // If player on the floor and moving backward = player wants to leave ladder
        if (IsOnFloor() && _movementVector.Y > 0)
            return false;
        
        // Player should look at ladder for being able to climb it
        var angle = GetAngleDegree(GlobalTransform.Origin, _ladder.GlobalTransform.Origin);
        if (angle > UseLadderAngle)
            return true;

        return false;
    }

    /// <summary>
    /// Function to handle what animation should play now
    /// </summary>
    private void PlayAnimations()
    {
        if (_isJustJumping)
            _characterSkin.Jump();
        else if (!IsOnFloor() && Velocity.Y < 0f)
            _characterSkin.Fall();
        else if (IsOnFloor())
        {
            var xzVelocity = new Vector3(Velocity.X, 0, Velocity.Z);
            if (xzVelocity.Length() > StoppingSpeed)
            {
                _characterSkin.SetMoving(true);
                _characterSkin.SetMovingSpeed(Mathf.InverseLerp(0.0f, MoveSpeed, xzVelocity.Length()));
            }
            else
                _characterSkin.SetMoving(false);
        }
    }

    /// <summary>
    /// Get XZ angle from one origin to other
    /// </summary>
    /// <param name="from">Origin vector of object 1</param>
    /// <param name="to">Origin vector of object 2</param>
    /// <returns></returns>
    private float GetAngleDegree(Vector3 from, Vector3 to)
    {
        from.Y = 0;
        to.Y = 0;
        
        Vector3 toObj2 = to - from;
        return _lastStrongDirection.Dot(toObj2.Normalized());
    }
}