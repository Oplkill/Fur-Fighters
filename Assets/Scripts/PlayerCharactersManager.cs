using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class Character
{
    public GameObject CharacterObject;
    public EnumCharacters CharacterType;
    public int Health = 100;

    public void CreateGameObject()
    {
        CharacterObject = (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Roofus/Roofus.prefab", typeof(GameObject));
    }
}

public class PlayerCharactersManager : MonoBehaviour
{
    [Tooltip("Characters")]
    public Dictionary<EnumCharacters, Character> Characters = new Dictionary<EnumCharacters, Character>()
    {
        { EnumCharacters.Roofus, new Character(){CharacterType = EnumCharacters.Roofus}},
    };

    // Start is called before the first frame update 
    void Start()
    {
        var initalSpawn = GameObject.Find("InitialPlayerSpawn").transform;
        SpawnCharacter(initalSpawn, EnumCharacters.Roofus);
    }

    void SpawnCharacter(Transform spawnPos, EnumCharacters characterType)
    {
        Characters[characterType].CreateGameObject();

        Object.Instantiate(Characters[characterType].CharacterObject, spawnPos);
        var cameraAttachment = Characters[characterType].CharacterObject.transform.GetChild(0).gameObject;
        var playerCamera = GameObject.Find("PlayerFollowCamera").GetComponent<CinemachineVirtualCamera>();
 
        Characters[characterType].CharacterObject.SetActive(true);
        
        playerCamera.Follow = cameraAttachment.transform;
    }
}
