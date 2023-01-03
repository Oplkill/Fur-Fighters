using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditorOnlyVisibility : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        transform.GetComponent<Renderer>().enabled = false;
    }
}
