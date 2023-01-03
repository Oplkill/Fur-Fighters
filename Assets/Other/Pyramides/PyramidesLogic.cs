using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using StarterAssets;

public class PyramidesLogic : MonoBehaviour
{
    [Tooltip("Is it golden pyramide or silver")]
    public bool IsGolden = true;

    private int _goldenHeal = 4;
    private int _silverHeal = 1;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(5, 20, 10) * Time.deltaTime);
    }

    private void OnTriggerEnter(Collider other)
    {
        var player = other.gameObject.GetComponent(typeof(ThirdPersonController)) as ThirdPersonController;

        if (!player)
            return;

        player.Heal(IsGolden ? _goldenHeal : _silverHeal);
        Destroy(gameObject);
    }
}
