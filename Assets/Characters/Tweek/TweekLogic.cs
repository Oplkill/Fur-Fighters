using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

using StarterAssets;

public class TweekLogic : ThirdPersonController
{
    [Tooltip("Gliding falling multiply")]
    public float GlidingFallingMultiply = 0.1f;

    // protected override void DoJump()
    // {
    //     if (false)
    //     {
    //         //_input.jump = false;
    //     }
    //     else
    //         base.DoJump();
    // }

    // Update is called once per frame
    protected override void JumpAndGravity()
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
                {
                    if (_input.glide && _fallTimeoutDelta < 0.0f)
                    {
                        _verticalVelocity += Gravity * GlidingFallingMultiply * Time.deltaTime;
                    }
                    else
                    {
                        _verticalVelocity += Gravity * Time.deltaTime;
                    }
                }
        }
    }

    
}
