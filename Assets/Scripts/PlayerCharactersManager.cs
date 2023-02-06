using System;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System.Threading.Tasks;
using StarterAssets;
using Unity.VisualScripting;
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
                CharacterObject =
                    (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Roofus/Roofus.prefab",
                        typeof(GameObject));
                break;
            case EnumCharacters.Juliette:
                CharacterObject =
                    (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Juliette/Juliette.prefab",
                        typeof(GameObject));
                break;
            case EnumCharacters.Chang:
                CharacterObject =
                    (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Chang/Chang.prefab",
                        typeof(GameObject));
                break;
            case EnumCharacters.Bungalow:
                CharacterObject =
                    (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Bungalow/Bungalow.prefab",
                        typeof(GameObject));
                break;
            case EnumCharacters.Rico:
                CharacterObject =
                    (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Rico/Rico.prefab",
                        typeof(GameObject));
                break;
            case EnumCharacters.Tweek:
                CharacterObject =
                    (GameObject)UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/Characters/Tweek/Tweek.prefab",
                        typeof(GameObject));
                break;
        }
    }
}

public class PlayerCharactersManager : MonoBehaviour
{
    [Tooltip("Characters")] public Dictionary<EnumCharacters, Character> Characters = new()
    {
        { EnumCharacters.Roofus, new Character() { CharacterType = EnumCharacters.Roofus } },
        { EnumCharacters.Bungalow, new Character() { CharacterType = EnumCharacters.Bungalow } },
        { EnumCharacters.Chang, new Character() { CharacterType = EnumCharacters.Chang } },
        { EnumCharacters.Juliette, new Character() { CharacterType = EnumCharacters.Juliette } },
        { EnumCharacters.Rico, new Character() { CharacterType = EnumCharacters.Rico } },
        { EnumCharacters.Tweek, new Character() { CharacterType = EnumCharacters.Tweek } }
    };

    public GameObject CurrentCharacter { get; private set; }

    // Start is called before the first frame update 
    private void Start()
    {
    }

    private void Awake()
    {
        var initalSpawn = GameObject.Find("InitialPlayerSpawn").transform;
        SpawnCharacter(initalSpawn.position, EnumCharacters.Roofus);
    }

    public async void SpawnCharacter(Vector3 spawnPos, EnumCharacters characterType)
    {
        Characters[characterType].CreateGameObject();

        Characters[characterType].CharacterObject = Instantiate(Characters[characterType].CharacterObject, transform);

        CurrentCharacter = Characters[characterType].CharacterObject;

        CurrentCharacter.SetActive(false);
        //charController.TeleportCharacter(spawnPos);
        CurrentCharacter.transform.position = spawnPos;
        CurrentCharacter.SetActive(true);

        var charController = CurrentCharacter.GetComponent<ThirdPersonController>();

        while (!charController.IsInitialized) await Task.Delay(25);

        var cameraAttachment = CurrentCharacter.transform.GetChild(0).gameObject;
        var playerCamera = GameObject.Find("PlayerFollowCamera").GetComponent<CinemachineVirtualCamera>();

        playerCamera.Follow = cameraAttachment.transform;
    }

    public void ReplaceCharacter(GameObject currentChar, EnumCharacters replaceCharacter)
    {
        Cursor.lockState = CursorLockMode.None;

        var currentTransform = currentChar.transform;
        //var currentTransform = transform;

        //currentTransform.position.Set(99, 99,99 );
        //currentTransform.SetPositionAndRotation(Vector3.zero, new Quaternion());

        //TODO save hp and game

        //currentChar.transform.position = transform.position;

        currentChar.SetActive(false);

        SpawnCharacter(currentTransform.position, replaceCharacter);

        Destroy(currentChar);

        //TODO load hp
    }
}