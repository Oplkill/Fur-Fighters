using Godot;
using System;
using Godot.Collections;

public partial class CharacterSkin : Node3D
{
    [Export] 
    public AnimationPlayer MainAnimationPlayer;

    private string _movingBlendPath = "parameters/StateMachine/move/blend_position";

    // False : set animation to "idle"
    // True : set animation to "move"
    private bool _moving;
    
    // Blend value between the walk and run cycle
    // 0.0 walk - 1.0 run
    private float _moveSpeed = 0f;

    private AnimationTree _animationTree;

    private AnimationNodeStateMachinePlayback _stateMachine;

    public override void _Ready()
    {
        _animationTree = GetNode<AnimationTree>("AnimationTree");
        _stateMachine = (AnimationNodeStateMachinePlayback)_animationTree.Get("parameters/StateMachine/playback");

        //main_animation_player["playback_default_blend_time"] = 0.1;
    }

    public void SetMoving(bool value)
    {
        _moving = value;
        _stateMachine.Travel(_moving ? "move" : "idle");
    }

    public void SetMovingSpeed(float value)
    {
        _moveSpeed = Mathf.Clamp(value, 0.0f, 1.0f);
        _animationTree.Set(_movingBlendPath, _moveSpeed);
    }

    public void Jump()
    {
        _stateMachine.Travel("jump");
    }
    
    public void Fall()
    {
        _stateMachine.Travel("fall");
    }

    public void Punch()
    {
        //animation_tree["parameters/PunchOneShot/request"] = AnimationNodeOneShot.ONE_SHOT_REQUEST_FIRE;
    }
}