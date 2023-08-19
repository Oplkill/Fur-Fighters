using Godot;
using System;

public partial class Ladder : Area3D
{
	public override void _Ready()
	{
		//Hiding editor only arrow. It's using for show ladder direction
		var dirArrow = GetNode<CsgBox3D>("Direction arrow");
		dirArrow.Hide();
	}

	public void BodyEntered(Node3D body)
	{
		if (body is PlayerBase player)
		{
			player.SetLadderState(true, this);
		}
	}
	
	public void BodyLeaved(Node3D body)
	{
		if (body is PlayerBase player)
		{
			player.SetLadderState(false, this);
		}
	}
}
