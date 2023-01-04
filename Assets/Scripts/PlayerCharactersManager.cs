using System;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System.Threading.Tasks;
using StarterAssets;
using Object = UnityEngine.Object;

public class Character
{
    public GameObject CharacterObject;
    public EnumCharacters CharacterType;
    public int Health = 100;

    public void CreateGameObject()
    {
        switch (CharacterType)
        {
            case EnumCharacters.Roofus:
                CharacterObject = (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Roofus/Roofus.prefab", typeof(GameObject));
                break;
            case EnumCharacters.Juliette:
                break;
            case EnumCharacters.Chang:
                CharacterObject = (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Chang/Chang.prefab", typeof(GameObject));
                break;
            case EnumCharacters.Bungalow:
                CharacterObject = (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Bungalow/Bungalow.prefab", typeof(GameObject));
                break;
            case EnumCharacters.Rico:
                break;
            case EnumCharacters.Tweek:
                break;
        }
    }
}

public class PlayerCharactersManager : MonoBehaviour
{
    [Tooltip("Characters")]
    public Dictionary<EnumCharacters, Character> Characters = new Dictionary<EnumCharacters, Character>()
    {
        { EnumCharacters.Roofus, new Character(){CharacterType = EnumCharacters.Roofus}},
        { EnumCharacters.Bungalow, new Character(){CharacterType = EnumCharacters.Bungalow}},
        { EnumCharacters.Chang, new Character(){CharacterType = EnumCharacters.Chang}},
        { EnumCharacters.Juliette, new Character(){CharacterType = EnumCharacters.Juliette}},
        { EnumCharacters.Rico, new Character(){CharacterType = EnumCharacters.Rico}},
        { EnumCharacters.Tweek, new Character(){CharacterType = EnumCharacters.Tweek}},
    };

    public GameObject CurrentCharacter { get; private set; }

    // Start is called before the first frame update 
    void Start()
    {
        var initalSpawn = GameObject.Find("InitialPlayerSpawn").transform;
        SpawnCharacter(initalSpawn, EnumCharacters.Bungalow);
    }

    public async void SpawnCharacter(Transform spawnPos, EnumCharacters characterType)
    {
        Characters[characterType].CreateGameObject();

        Characters[characterType].CharacterObject = Object.Instantiate(Characters[characterType].CharacterObject, spawnPos);

        CurrentCharacter = Characters[characterType].CharacterObject;

        var charController = Characters[characterType].CharacterObject.GetComponent<ThirdPersonController>();
        
        /*while (!charController.IsInitialized)
        {
            await Task.Delay(25);
        }
        
        var cameraAttachment = Characters[characterType].CharacterObject.transform.GetChild(0).gameObject;
        var playerCamera = GameObject.Find("PlayerFollowCamera").GetComponent<CinemachineVirtualCamera>();

        playerCamera.Follow = cameraAttachment.transform;*/
    }

    public void ReplaceCharacter(GameObject currentChar, EnumCharacters replaceCharacter)
    {
        Cursor.lockState = CursorLockMode.None;
        
        //var currentTransform = currentChar.transform;
        var currentTransform = transform;

        currentTransform.position.Set(99, 99,99 );
        currentTransform.SetPositionAndRotation(Vector3.zero, new Quaternion());
        
        //TODO save hp and game
        
        //currentChar.transform.position = transform.position;
        
        currentChar.SetActive(false);

        SpawnCharacter(currentTransform, replaceCharacter);
        
        Destroy(currentChar);
        
        //TODO load hp
    }
}
