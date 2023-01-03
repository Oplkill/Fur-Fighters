using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System.Collections.Generic;
using System.Threading.Tasks;
using StarterAssets;

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

    async void SpawnCharacter(Transform spawnPos, EnumCharacters characterType)
    {
        Characters[characterType].CreateGameObject();

        Characters[characterType].CharacterObject = Object.Instantiate(Characters[characterType].CharacterObject, spawnPos);

        var charController = Characters[characterType].CharacterObject.GetComponent<ThirdPersonController>();
        
        while (!charController.IsInitialized)
        {
            await Task.Delay(25);
        }
        
        var cameraAttachment = Characters[characterType].CharacterObject.transform.GetChild(0).gameObject;
        var playerCamera = GameObject.Find("PlayerFollowCamera").GetComponent<CinemachineVirtualCamera>();

        playerCamera.Follow = cameraAttachment.transform;
    }
}
