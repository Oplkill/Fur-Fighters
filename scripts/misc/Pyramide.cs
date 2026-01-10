using Godot;
using System;

public partial class Pyramide : Area3D
{
	[Export] 
	public bool Golden = true;

	private const int GoldenHeal = 4;
	private const int NormalHeal = 2;
	
	public const float RotationSpeed = 0.5f;
	
	// Called when the node enters the scene tree for the first time.
	public override void _Ready()
	{
	}

	// Called every frame. 'delta' is the elapsed time since the previous frame.
	public override void _Process(double delta)
	{
		RotateY((float)delta * RotationSpeed * 0.5f);
		RotateX((float)delta * RotationSpeed);
		RotateZ((float)delta * RotationSpeed);
	}
	
	public void BodyEntered(Node3D body)
	{
		if (body is PlayerBase player)
		{
			player.Damagable.Heal(Golden ? GoldenHeal : NormalHeal);
			QueueFree();
		}
	}
}
