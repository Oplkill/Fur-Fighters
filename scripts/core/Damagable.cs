using System;
using Godot;

/// <summary>
/// Node-class for manage health system for objects
/// </summary>
public partial class Damagable : Node
{
    /// <summary>
    /// Max amount health. (Initial health amount too)
    /// </summary>
    [Export] 
    public int MaxHealth = 100;

    /// <summary>
    /// Current health amount
    /// </summary>
    public int Health { get; private set; }

    /// <summary>
    /// Death signal. Emits when healths get to zero
    /// </summary>
    [Signal] 
    public delegate void DiedEventHandler();
    
    /// <summary>
    /// Health changed signal. Emits whenever health changed
    /// </summary>
    /// <param name="newHealth">New health</param>
    [Signal]
    public delegate void HealthChangedEventHandler(int newHealth);
    
    /// <summary>
    /// Got damage signal
    /// </summary>
    /// <param name="damage">Damage amount</param>
    /// <param name="damageType">Damage type</param>
    [Signal]
    public delegate void DamagedEventHandler(int damage, DamageType damageType);
    
    /// <summary>
    /// Got heal signal
    /// </summary>
    /// <param name="heal">Heal amount</param>
    [Signal]
    public delegate void HealedEventHandler(int heal);

    public override void _Ready()
    {
        SetHealth(MaxHealth);
    }

    /// <summary>
    /// Increase health. Emits Heal signal
    /// </summary>
    /// <param name="amount">Increase health amount</param>
    public void Heal(int amount)
    {
        if (Health + amount > MaxHealth)
            amount = MaxHealth - Health;
        
        if (amount > 0)
        {
            EmitSignal(SignalName.Healed, amount);
            SetHealth(Health + amount);
        }
    }

    /// <summary>
    /// Decrease health. Emits Damage signal
    /// </summary>
    /// <param name="amount">Decrease health amount</param>
    public void Damage(int amount, DamageType damageType = DamageType.Unknown)
    {
        if (Health - amount < 0)
            amount = Health;

        if (amount > 0)
        {
            EmitSignal(SignalName.Damaged, new Variant[]{amount, (int)damageType});
            SetHealth(Health - amount);
        }
    }

    /// <summary>
    /// Can be healed?
    /// </summary>
    /// <returns>True - health is not max. False - health is on max</returns>
    public bool CanGetHeal()
    {
        return Health < MaxHealth;
    }
    
    /// <summary>
    /// Change health. Will not emit heal/damage signals. 
    /// </summary>
    /// <param name="amount">New health amount</param>
    public void SetHealth(int amount)
    {
        Health = Math.Clamp(amount, 0, MaxHealth);

        if (Health == 0)
            EmitSignal(SignalName.Died);

        EmitSignal(SignalName.HealthChanged, Health);
    }
}