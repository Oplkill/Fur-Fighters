using Godot;
using System;

public partial class Ladder : Area3D
{
	public void BodyEntered(Node3D body)
	{
		if (body is PlayerBase player)
		{
			player.SetLadderState(true);
		}
	}
	
	public void BodyLeaved(Node3D body)
	{
		if (body is PlayerBase player)
		{
			player.SetLadderState(false);
		}
	}
}
