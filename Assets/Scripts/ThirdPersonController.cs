﻿using UnityEngine;
#if ENABLE_INPUT_SYSTEM && STARTER_ASSETS_PACKAGES_CHECKED
using UnityEngine.InputSystem;
using TMPro;
using Cinemachine;

//using System;
#endif

/* Note: animations are called via the controller for both the character and capsule using animator null checks
 */

namespace StarterAssets
{
    [RequireComponent(typeof(CharacterController))]
#if ENABLE_INPUT_SYSTEM && STARTER_ASSETS_PACKAGES_CHECKED
    [RequireComponent(typeof(PlayerInput))]
#endif
    public class ThirdPersonController : MonoBehaviour
    {
        [Header("Player")] [Tooltip("Move speed of the character in m/s")]
        public float MoveSpeed = 5.335f;

        [Tooltip("How fast the character turns to face movement direction")] [Range(0.0f, 0.3f)]
        public float RotationSmoothTime = 0.12f;

        [Tooltip("Acceleration and deceleration")]
        public float SpeedChangeRate = 10.0f;

        public AudioClip LandingAudioClip;
        public AudioClip[] FootstepAudioClips;
        [Range(0, 1)] public float FootstepAudioVolume = 0.5f;

        [Space(10)] [Tooltip("The height the player can jump")]
        public float JumpHeight = 1.2f;

        [Tooltip("The character uses its own gravity value. The engine default is -9.81f")]
        public float Gravity = -15.0f;

        [Space(10)]
        [Tooltip("Time required to pass before being able to jump again. Set to 0f to instantly jump again")]
        public float JumpTimeout = 0.15f;

        [Tooltip("Time required to pass before entering the fall state. Useful for walking down stairs")]
        public float FallTimeout = 0.15f;

        [Header("Player Grounded")]
        [Tooltip("If the character is grounded or not. Not part of the CharacterController built in grounded check")]
        public bool Grounded = true;

        [Tooltip("Useful for rough ground")] public float GroundedOffset = 0.11f;

        [Tooltip("The radius of the grounded check. Should match the radius of the CharacterController")]
        public float GroundedRadius = 0.28f;

        [Tooltip("What layers the character uses as ground")]
        public LayerMask GroundLayers = 513;

        [Header("Cinemachine")]
        [Tooltip("The follow target set in the Cinemachine Virtual Camera that the camera will follow")]
        public GameObject CinemachineCameraTarget;

        [Tooltip("How far in degrees can you move the camera up")]
        public float TopClamp = 70.0f;

        [Tooltip("How far in degrees can you move the camera down")]
        public float BottomClamp = -30.0f;

        [Tooltip("Additional degress to override the camera. Useful for fine tuning camera position when locked")]
        public float CameraAngleOverride = 0.0f;

        [Tooltip("For locking the camera position on all axis")]
        public bool LockCameraPosition = false;

        [Tooltip("Falling speed for damage 1 health")]
        public float MinimumFallingSpeedForDamage = 7.0f;

        [Tooltip("Falling speed for damage full health")]
        public float MaximumFallingSpeedForDamage = 30.0f;

        [Tooltip("Maximum health")] public int MaxHealth = 100;

        [Tooltip("Climb speed")] public float ClimbSpeed = 2;

        [Tooltip("Character type")] public EnumCharacters _character = EnumCharacters.Roofus;

        public bool IsInitialized { get; private set; }

        protected bool InWater { get; set; }

        [SerializeField] private LayerMask waterMask = 4;

        [SerializeField] [Range(0f, 10f)] protected float waterDrag = 1f;

        [SerializeField] [Min(0f)] protected float waterBuoyancy = 0.8f;

        // cinemachine
        private float _cinemachineTargetYaw;
        private float _cinemachineTargetPitch;

        // player
        protected float _speed;
        protected float _animationBlend;
        protected float _targetRotation = 0.0f;
        protected float _rotationVelocity;
        protected float _verticalVelocity;
        protected float _terminalVelocity = 53.0f;
        protected bool _hitGroundFirstTimeAfterFall = true;
        private float _health = 100;

        // UI
        private Transform _canvasUI;

        // timeout deltatime
        protected float _jumpTimeoutDelta;
        protected float _fallTimeoutDelta;

        // animation IDs
        protected int _animIDSpeed;
        protected int _animIDGrounded;
        protected int _animIDJump;
        protected int _animIDFreeFall;
        protected int _animIDMotionSpeed;

#if ENABLE_INPUT_SYSTEM && STARTER_ASSETS_PACKAGES_CHECKED
        protected PlayerInput _playerInput;
#endif
        protected Animator _animator;
        protected CharacterController _controller;
        protected StarterAssetsInputs _input;
        private GameObject _mainCamera;
        protected bool blockMovement = false;
        protected bool IsClimbing = false;

        protected const float _threshold = 0.01f;

        protected bool _hasAnimator;

        private bool IsCurrentDeviceMouse
        {
            get
            {
#if ENABLE_INPUT_SYSTEM && STARTER_ASSETS_PACKAGES_CHECKED
                return _playerInput.currentControlScheme == "KeyboardMouse";
#else
				return false;
#endif
            }
        }


        private void Awake()
        {
            // get a reference to our main camera
            if (_mainCamera == null) _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");

            _canvasUI = GameObject.Find("Player UI canvas").transform; //TODO to constants or byType

            UpdateUI();

            var cameraAttachment = gameObject.transform.GetChild(0).gameObject;
            var playerCamera = GameObject.Find("PlayerFollowCamera").GetComponent<CinemachineVirtualCamera>();

            playerCamera.Follow = cameraAttachment.transform;
        }

        protected virtual void Start()
        {
            _cinemachineTargetYaw = CinemachineCameraTarget.transform.rotation.eulerAngles.y;

            _hasAnimator = TryGetComponent(out _animator);
            _controller = GetComponent<CharacterController>();
            _input = GetComponent<StarterAssetsInputs>();
#if ENABLE_INPUT_SYSTEM && STARTER_ASSETS_PACKAGES_CHECKED
            _playerInput = GetComponent<PlayerInput>();
#else
			Debug.LogError( "Starter Assets package is missing dependencies. Please use Tools/Starter Assets/Reinstall Dependencies to fix it");
#endif

            AssignAnimationIDs();

            // reset our timeouts on start
            _jumpTimeoutDelta = JumpTimeout;
            _fallTimeoutDelta = FallTimeout;

            IsInitialized = true;
        }

        protected virtual void Update()
        {
            _hasAnimator = TryGetComponent(out _animator);

            GroundedCheck();
            JumpAndGravity();
            if (!blockMovement)
                Move();
            Attack();
        }

        private void LateUpdate()
        {
            CameraRotation();
        }

        private void AssignAnimationIDs()
        {
            _animIDSpeed = Animator.StringToHash("Speed");
            _animIDGrounded = Animator.StringToHash("Grounded");
            _animIDJump = Animator.StringToHash("Jump");
            _animIDFreeFall = Animator.StringToHash("FreeFall");
            _animIDMotionSpeed = Animator.StringToHash("MotionSpeed");
        }

        private void GroundedCheck()
        {
            // set sphere position, with offset
            var pos = transform.position;
            var spherePosition = new Vector3(pos.x, pos.y - GroundedOffset, pos.z);
            Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers,
                QueryTriggerInteraction.Ignore);

            // update animator if using character
            if (_hasAnimator) _animator.SetBool(_animIDGrounded, Grounded);
        }

        private void CameraRotation()
        {
            // if there is an input and camera position is not fixed
            if (_input.look.sqrMagnitude >= _threshold && !LockCameraPosition)
            {
                //Don't multiply mouse input by Time.deltaTime;
                var deltaTimeMultiplier = IsCurrentDeviceMouse ? 1.0f : Time.deltaTime;

                _cinemachineTargetYaw += _input.look.x * deltaTimeMultiplier;
                _cinemachineTargetPitch += _input.look.y * deltaTimeMultiplier;
            }

            // clamp our rotations so our values are limited 360 degrees
            _cinemachineTargetYaw = ClampAngle(_cinemachineTargetYaw, float.MinValue, float.MaxValue);
            _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);

            // Cinemachine will follow this target
            CinemachineCameraTarget.transform.rotation = Quaternion.Euler(_cinemachineTargetPitch + CameraAngleOverride,
                _cinemachineTargetYaw, 0.0f);
        }

        private void Move()
        {
            if (IsClimbing)
            {
                Vector3 move = transform.rotation * Vector3.forward * _input.move;

                var newMotion = move.normalized * (_speed * Time.deltaTime);
                newMotion += new Vector3(0.0f, _input.move.y * ClimbSpeed, 0.0f) * Time.deltaTime;
                //newMotion.x *= -1;

                _controller.Move(newMotion);

                if (!Grounded)
                    return;
            }

            //else
            {
                // set target speed based on move speed
                var targetSpeed = MoveSpeed;

                // a simplistic acceleration and deceleration designed to be easy to remove, replace, or iterate upon

                // note: Vector2's == operator uses approximation so is not floating point error prone, and is cheaper than magnitude
                // if there is no input, set the target speed to 0
                if (_input.move == Vector2.zero) targetSpeed = 0.0f;

                // a reference to the players current horizontal velocity
                var currentHorizontalSpeed =
                    new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;

                var speedOffset = 0.1f;
                var inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;

                // accelerate or decelerate to target speed
                if (currentHorizontalSpeed < targetSpeed - speedOffset ||
                    currentHorizontalSpeed > targetSpeed + speedOffset)
                {
                    // creates curved result rather than a linear one giving a more organic speed change
                    // note T in Lerp is clamped, so we don't need to clamp our speed
                    _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude,
                        Time.deltaTime * SpeedChangeRate);

                    // round speed to 3 decimal places
                    _speed = Mathf.Round(_speed * 1000f) / 1000f;
                }
                else
                {
                    _speed = targetSpeed;
                }

                _animationBlend = Mathf.Lerp(_animationBlend, targetSpeed, Time.deltaTime * SpeedChangeRate);
                if (_animationBlend < 0.01f) _animationBlend = 0f;

                // normalise input direction
                var inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;

                // note: Vector2's != operator uses approximation so is not floating point error prone, and is cheaper than magnitude
                // if there is a move input rotate player when the player is moving
                if (_input.move != Vector2.zero)
                {
                    _targetRotation = Mathf.Atan2(inputDirection.x, inputDirection.z) * Mathf.Rad2Deg +
                                      _mainCamera.transform.eulerAngles.y;
                    var rotation = Mathf.SmoothDampAngle(transform.eulerAngles.y, _targetRotation,
                        ref _rotationVelocity,
                        RotationSmoothTime);

                    // rotate to face input direction relative to camera position
                    transform.rotation = Quaternion.Euler(0.0f, rotation, 0.0f);
                }


                var targetDirection = Quaternion.Euler(0.0f, _targetRotation, 0.0f) * Vector3.forward;

                // move the player
                _controller.Move(targetDirection.normalized * (_speed * Time.deltaTime) +
                                 new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);

                // update animator if using character
                if (_hasAnimator)
                {
                    _animator.SetFloat(_animIDSpeed, _animationBlend);
                    _animator.SetFloat(_animIDMotionSpeed, inputMagnitude);
                }
            }
        }

        protected virtual void JumpAndGravity()
        {
            if (InWater)
            {
                //_verticalVelocity *= 1f - waterDrag * Time.deltaTime;
                _verticalVelocity -= Gravity * ((1f - waterBuoyancy) * Time.deltaTime);
                //_verticalVelocity -= Gravity * Time.deltaTime;
            }
            else
            {
                if (Grounded)
                {
                    if (!_hitGroundFirstTimeAfterFall)
                    {
                        _hitGroundFirstTimeAfterFall = true;

                        OnGroundedAfterFall(Mathf.Abs(_verticalVelocity));
                    }

                    // reset the fall timeout timer
                    _fallTimeoutDelta = FallTimeout;

                    // update animator if using character
                    if (_hasAnimator)
                    {
                        _animator.SetBool(_animIDJump, false);
                        _animator.SetBool(_animIDFreeFall, false);
                    }

                    // stop our velocity dropping infinitely when grounded
                    if (_verticalVelocity < 0.0f) _verticalVelocity = -2f;

                    // Jump
                    if (_input.jump && _jumpTimeoutDelta <= 0.0f)
                    {
                        if (IsClimbing)
                            _input.jump = false;
                        else
                            DoJump();
                    }

                    // jump timeout
                    if (_jumpTimeoutDelta >= 0.0f) _jumpTimeoutDelta -= Time.deltaTime;
                }
                else
                {
                    _hitGroundFirstTimeAfterFall = false;

                    // reset the jump timeout timer
                    _jumpTimeoutDelta = JumpTimeout;

                    // fall timeout
                    if (_fallTimeoutDelta >= 0.0f)
                    {
                        _fallTimeoutDelta -= Time.deltaTime;
                    }
                    else
                    {
                        // update animator if using character
                        if (_hasAnimator) _animator.SetBool(_animIDFreeFall, true);
                    }

                    // if we are not grounded, do not jump
                    _input.jump = false;
                }

                if (!IsClimbing)
                    // apply gravity over time if under terminal (multiply by delta time twice to linearly speed up over time)
                    if (_verticalVelocity < _terminalVelocity)
                        _verticalVelocity += Gravity * Time.deltaTime;
            }
        }

        private static float ClampAngle(float lfAngle, float lfMin, float lfMax)
        {
            if (lfAngle < -360f) lfAngle += 360f;
            if (lfAngle > 360f) lfAngle -= 360f;
            return Mathf.Clamp(lfAngle, lfMin, lfMax);
        }

        private void OnDrawGizmosSelected()
        {
            var transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
            var transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);

            if (Grounded) Gizmos.color = transparentGreen;
            else Gizmos.color = transparentRed;

            // when selected, draw a gizmo in the position of, and matching radius of, the grounded collider
            Gizmos.DrawSphere(
                new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z),
                GroundedRadius);
        }

        private void OnFootstep(AnimationEvent animationEvent)
        {
            if (animationEvent.animatorClipInfo.weight > 0.5f)
                if (FootstepAudioClips.Length > 0)
                {
                    var index = Random.Range(0, FootstepAudioClips.Length);
                    //AudioSource.PlayClipAtPoint(FootstepAudioClips[index], transform.TransformPoint(_controller.center), FootstepAudioVolume);
                }
        }

        private void OnLand(AnimationEvent animationEvent)
        {
            if (animationEvent.animatorClipInfo.weight > 0.5f)
            {
                //AudioSource.PlayClipAtPoint(LandingAudioClip, transform.TransformPoint(_controller.center), FootstepAudioVolume);
            }
        }

        protected void Attack()
        {
            if (_input.shooting)
            {
                //_animator.SetTrigger("Attack");
                //_input.attack = false;
                //Debug.Log("+++");
            }
        }

        protected void SetHealth(float newHealth)
        {
            _health = (int)newHealth;

            if (_health < 1.0f)
                _health = 0.0f;

            if (_health > MaxHealth)
                _health = MaxHealth;

            UpdateUI();

            if (_health < 1.0f)
                Death();
        }

        protected void AddHealth(float healthDelta)
        {
            SetHealth(_health + healthDelta);
        }

        public bool Heal(float healDelta)
        {
            if (_health >= MaxHealth)
                return false;

            AddHealth(healDelta);
            return true;
        }

        private void Death()
        {
            Debug.Log("DED");
        }

        protected void OnGroundedAfterFall(float fallingSpeed)
        {
            if (fallingSpeed >= MinimumFallingSpeedForDamage)
            {
                var extraSpeed = fallingSpeed - MinimumFallingSpeedForDamage;

                var damagePercent = extraSpeed / (MaximumFallingSpeedForDamage - MinimumFallingSpeedForDamage);

                AddHealth(-(damagePercent * MaxHealth));
            }
        }

        protected virtual void DoJump()
        {
            if (blockMovement)
            {
                _input.jump = false;
                return;
            }

            // the square root of H * -2 * G = how much velocity needed to reach desired height
            _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);

            // update animator if using character
            if (_hasAnimator) _animator.SetBool(_animIDJump, true);

            Grounded = false;
        }

        protected void UpdateUI()
        {
            //TODO make GetChild(0) be constants
            var healthUI = _canvasUI.GetChild(0).gameObject.GetComponent(typeof(TMP_Text)) as TMP_Text;

            healthUI.text = ((int)_health).ToString();
        }

        protected virtual void OnTriggerEnter(Collider other)
        {
            if ((waterMask & (1 << other.gameObject.layer)) != 0) InWater = true;

            if (other.CompareTag("Ladder"))
            {
                IsClimbing = true;
                _verticalVelocity = 0;
                //transform.LookAt(other.transform, new Vector3(0, 1, -1));

                var charPos = other.transform.position;

                // Calculate a vector pointing to the target.
                var toTarget = charPos - transform.position;

                //transform.rotation = Quaternion.LookRotation(-toTarget);
                var fullRotare = Quaternion.LookRotation(-toTarget);
                var newRotare = new Quaternion(transform.rotation.x, fullRotare.y, transform.rotation.z,
                    transform.rotation.w);

                transform.rotation = newRotare;
            }
        }

        protected virtual void OnTriggerStay(Collider other)
        {
            if ((waterMask & (1 << other.gameObject.layer)) != 0) InWater = true;
        }

        protected virtual void OnTriggerExit(Collider other)
        {
            if ((waterMask & (1 << other.gameObject.layer)) != 0)
            {
                InWater = false;
                _verticalVelocity = 0;
            }

            if (other.CompareTag("Ladder")) IsClimbing = false;
        }

        public void TeleportCharacter(Vector3 newPos)
        {
            gameObject.SetActive(false);
            gameObject.transform.position = newPos;
            gameObject.SetActive(true);
        }
    }
}