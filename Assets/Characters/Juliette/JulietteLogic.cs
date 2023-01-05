using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

using StarterAssets;

public class JulietteLogic : ThirdPersonController
{
    protected override void OnTriggerEnter (Collider other) {
        if (other.CompareTag("Ladder cat"))
        {
            IsClimbing = true;
        }

        base.OnTriggerEnter(other);
    }
        
    protected override void OnTriggerExit (Collider other) {
        if (other.CompareTag("Ladder cat"))
        {
            IsClimbing = false;
        }
        
        base.OnTriggerExit(other);
    }
}
