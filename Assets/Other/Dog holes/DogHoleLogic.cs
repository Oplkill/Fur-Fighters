using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogHoleLogic : MonoBehaviour
{
    [Tooltip("Other linked dog hole")]
    public GameObject LinkedDogHole;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    private void OnTriggerEnter(Collider other)
    {
        var player = other.gameObject.GetComponent(typeof(RoofusLogic)) as RoofusLogic;

        if (!player || player._character != EnumCharacters.Roofus)
            return;

        player.LinkedDogHole = LinkedDogHole;
        player.IsInDigZone = true;
    }
    
    private void OnTriggerExit(Collider other)
    {
        var player = other.gameObject.GetComponent(typeof(RoofusLogic)) as RoofusLogic;

        if (!player || player._character != EnumCharacters.Roofus)
            return;
        
        player.IsInDigZone = false;
        player.LinkedDogHole = null;
    }
}
