using Godot;
using System;
using Godot.Collections;

public partial class CameraController : Node3D
{
    [Export]
    public NodePath PlayerPath;
    [Export]
    public bool InvertMouseY = false;
    [Export]
    public float MouseSensitivity = 0.25f; //range(0.0, 1.0)
    [Export] 
    public float JoystickSensitivity = 2.0f; //range(0.0, 8.0)
    [Export]
    public float TiltUpperLimit = Mathf.DegToRad(60f);
    [Export]
    public float TiltLowerLimit = Mathf.DegToRad(-60f);

    private Camera3D _camera;
    private Node3D _overShoulderPivot;
    private SpringArm3D _cameraSpringArm;
    private Node3D _thirdPersonPivot;
    private RayCast3D _cameraRaycast;

    private Vector3 _aimTarget;
    private GodotObject _aimCollider;
    private Node3D _pivot;
    private float _rotationInput;
    private float _tiltInput;
    private bool _mouseInput;
    private Vector3 _offset;
    private CharacterBody3D _anchor;
    private Vector3 _eulerRotation;

    public override void _Ready()
    {
        _camera = GetNode<Camera3D>("PlayerCamera");
        _overShoulderPivot = GetNode<Node3D>("CameraOverShoulderPivot");
        _cameraSpringArm = GetNode<SpringArm3D>("CameraSpringArm");
        _thirdPersonPivot = GetNode<Node3D>("CameraSpringArm/CameraThirdPersonPivot");
        _cameraRaycast = GetNode<RayCast3D>("PlayerCamera/CameraRayCast");
        _pivot = _thirdPersonPivot;

        MouseSensitivity = Mathf.Clamp(MouseSensitivity, 0f, 1f);
        JoystickSensitivity = Mathf.Clamp(MouseSensitivity, 0f, 8f);
    }

    public override void _UnhandledInput(InputEvent @event)
    {
        _mouseInput = @event is InputEventMouseMotion && Input.MouseMode == Input.MouseModeEnum.Captured;
        if (!_mouseInput) return;
        
        var motion = (InputEventMouseMotion)@event;
        _rotationInput = -motion.Relative.X * MouseSensitivity;
        _tiltInput = motion.Relative.Y * MouseSensitivity;
    }

    public override void _PhysicsProcess(double delta)
    {
        if (_anchor == null)
            return;

        if (InvertMouseY)
            _tiltInput *= -1;

        if (_cameraRaycast.IsColliding())
        {
            _aimTarget = _cameraRaycast.GetCollisionPoint();
            _aimCollider = _cameraRaycast.GetCollider();
        }
        else
        {
            _aimTarget = _cameraRaycast.GlobalTransform * _cameraRaycast.TargetPosition;
            _aimCollider = null;
        }
        
        //TODO del it!!!
        var groundHeight = _anchor.GlobalPosition.Y;
        
        // Set camera controller to current ground level for the character
        var targetPosition = _anchor.GlobalPosition + _offset;
        //target_position.Y = (float)Mathf.Lerp(GlobalPosition.Y, _anchor._ground_height, 0.1);
        targetPosition.Y = (float)Mathf.Lerp(GlobalPosition.Y, groundHeight, 0.1);
        GlobalPosition = targetPosition;
        
        // Rotates camera using euler rotation
        _eulerRotation.X += (float)(_tiltInput * delta);
        _eulerRotation.X = Mathf.Clamp(_eulerRotation.X, TiltLowerLimit, TiltUpperLimit);
        _eulerRotation.Y += (float)(_rotationInput * delta);
        
        var newTransform = Transform;
        newTransform.Basis = Basis.FromEuler(_eulerRotation);
        Transform = newTransform;
        
        _camera.GlobalTransform = _pivot.GlobalTransform;
        
        var newCameraRotation = _camera.Rotation;
        newCameraRotation.Z = 0f;
        _camera.Rotation = newCameraRotation;
        
        _rotationInput = 0.0f;
        _tiltInput = 0.0f;
    }

    public void Setup(CharacterBody3D anchor)
    {
        _anchor = anchor;
        _offset = GlobalTransform.Origin - anchor.GlobalTransform.Origin;
        _camera.GlobalTransform = _camera.GlobalTransform.InterpolateWith(_pivot.GlobalTransform, 0.1f);
        _cameraSpringArm.AddExcludedObject(_anchor.GetRid());
        _cameraRaycast.AddExceptionRid(_anchor.GetRid());
        _pivot = _thirdPersonPivot;
    }

    public Vector3 GetAimTarget()
    {
        return _aimTarget;
    }

    public GodotObject GetAimCollider()
    {
        return IsInstanceValid(_aimCollider) ? _aimCollider : null;
    }
}