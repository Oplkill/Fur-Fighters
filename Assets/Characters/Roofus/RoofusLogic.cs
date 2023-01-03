using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

using StarterAssets;

public class RoofusLogic : ThirdPersonController
{
    [Tooltip("Time digging in")]
    public float TimeDiggingIn = 15.0f;

    [Tooltip("Time digging out")]
    public float TimeDiggingOut = 15.0f;

    public bool IsInDigZone = false;
    //public ;

    protected override void DoJump()
    {
        if (IsInDigZone)
        {

        }
        else
            base.DoJump();
    }

    /*// Start is called before the first frame update
    void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    void Update()
    {
        base.Update();
    }*/

    
}
