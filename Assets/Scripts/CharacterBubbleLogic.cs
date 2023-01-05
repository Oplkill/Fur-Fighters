using System;
using System.Collections;
using System.Collections.Generic;
using StarterAssets;
using UnityEngine;

public class CharacterBubbleLogic : MonoBehaviour
{
    [Tooltip("Character type")]
    public EnumCharacters Character = EnumCharacters.Roofus;

    private PlayerCharactersManager _gm;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void Awake()
    {
        _gm = GameObject.Find("GameManager").GetComponent<PlayerCharactersManager>();
    }
    

    // Update is called once per frame
    void Update()
    {
        if (!_gm || !_gm.CurrentCharacter)
            return;
        
        var charPos = _gm.CurrentCharacter.transform.position;

        // Calculate a vector pointing to the target.
        Vector3 toTarget = charPos - transform.position;
        
        //transform.rotation = Quaternion.LookRotation(-toTarget);
        var fullRotare = Quaternion.LookRotation(-toTarget);
        var newRotare = new Quaternion(transform.rotation.x, fullRotare.y, transform.rotation.z, transform.rotation.w);

        transform.rotation = newRotare;
    }
    
    private void OnTriggerEnter(Collider other)
    {
        var player = other.gameObject.GetComponent(typeof(ThirdPersonController)) as ThirdPersonController;

        if (!player || player._character == Character)
            return;
        
        _gm.ReplaceCharacter(player.gameObject, Character);
    }
}
