using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

using StarterAssets;

enum DigStatus
{
    NoDig,
    DiggingIn,
    DiggingOut,
}

public class RoofusLogic : ThirdPersonController
{
    [Tooltip("Time digging in")]
    public float TimeDiggingIn = 1.0f;

    [Tooltip("Time digging out")]
    public float TimeDiggingOut = 1.0f;

    public bool IsInDigZone = false;
    
    public GameObject LinkedDogHole;

    private DigStatus digStatus = DigStatus.NoDig;
    private float timeRemaining = 0;

    protected override void DoJump()
    {
        if (blockMovement)
        {
            _input.jump = false;
            return;
        }
        
        if (IsInDigZone)
        {
            blockMovement = true;
            _input.jump = false;

            timeRemaining = TimeDiggingIn;
            digStatus = DigStatus.DiggingIn;
            //TeleportCharacter(LinkedDogHole.transform.position);

            //blockMovement = false;
        }
        else
            base.DoJump();
    }

    // Start is called before the first frame update
    protected override void Start()
    {
        digStatus = DigStatus.NoDig;
        base.Start();
    }

    // Update is called once per frame
    protected override void Update()
    {
        if (timeRemaining > 0)
        {
            timeRemaining -= Time.deltaTime;

            if (timeRemaining <= 0)
            {
                timeRemaining = 0;
                
                switch (digStatus)
                {
                    case DigStatus.NoDig:
                        break;
                    case DigStatus.DiggingIn:
                        TeleportCharacter(LinkedDogHole.transform.position);
                        timeRemaining = TimeDiggingOut;
                        digStatus = DigStatus.DiggingOut;
                        break;
                    case DigStatus.DiggingOut:
                        digStatus = DigStatus.NoDig;
                        blockMovement = false;
                        break;
                }
            }
        }

        base.Update(); 
    }

    
}
