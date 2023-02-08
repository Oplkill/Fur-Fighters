using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using StarterAssets;

public class BabyScript : MonoBehaviour
{
    [Tooltip("Character type")] 
    public EnumCharacters _character = EnumCharacters.Roofus;
    
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
        var player = other.gameObject.GetComponent(typeof(ThirdPersonController)) as ThirdPersonController;

        if (!player)
            return;

        if (player._character == _character)
        {
            //Destroy(gameObject);
            Debug.Log("Baby saved");
        }
    }
}
