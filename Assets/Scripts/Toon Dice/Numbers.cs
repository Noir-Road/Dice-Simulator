using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Numbers : MonoBehaviour
{

    public float destroytime = 1.5f;

    // Start is called before the first frame update
    void Start()
    {

        Destroy(gameObject,destroytime);


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
