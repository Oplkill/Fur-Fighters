using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using StarterAssets;

public class BaseHealthLogic : MonoBehaviour
{
    [Tooltip("Healing ammount")]
    [Range(0, 100)]
    public int HealingAmmount = 25;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0, 20, 0) * Time.deltaTime);
    }

    private void OnTriggerEnter(Collider other)
    {
        var player = other.gameObject.GetComponent(typeof(ThirdPersonController)) as ThirdPersonController;

        if (!player)
            return;

        if (player.Heal(HealingAmmount))
            Destroy(gameObject);
    }
}
