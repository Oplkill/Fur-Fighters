using Godot;
using System;

/// <summary>
/// Node-class for manage falling damage of objects with velocity
/// </summary>
public partial class FallDamage : Node
{
    /// <summary>
    /// Object with velocity
    /// </summary>
    [Export] 
    public CharacterBody3D FallingObject; //TODO make universal var type for including mobs too

    /// <summary>
    /// Object's damagable class
    /// </summary>
    [Export] 
    public Damagable Damagable;

    /// <summary>
    /// Minimal negative velocity for not take damage.
    /// </summary>
    [Export] 
    public float MinVelocity;

    /// <summary>
    /// How much need extra velocity for count 1 damage
    /// </summary>
    [Export] 
    public float OneDamageForExtraVelocity;
    
    /// <summary>
    /// Previously object's velocity
    /// </summary>
    private float _prevVelocity;

    public override void _PhysicsProcess(double delta)
    {
        if (FallingObject.IsOnFloor())
        {
            //GD.Print(_prevVelocity.ToString());
            if (_prevVelocity < MinVelocity)
            {
                float extraVelocity = MinVelocity - _prevVelocity;
                int damage = (int)(extraVelocity/OneDamageForExtraVelocity);
                Damagable.Damage(damage, DamageType.Fall);
            }
            
            _prevVelocity = 0;
        }
        else
        {
            _prevVelocity = FallingObject.Velocity.Y;
        }
    }
}