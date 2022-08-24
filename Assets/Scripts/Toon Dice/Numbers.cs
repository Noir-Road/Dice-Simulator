using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Numbers : MonoBehaviour
{

    public float destroytime = 2.5f;

    // Start is called before the first frame update
    void Start()
    {
         float elapsedTime = 0;
         Color startingColor = transform.GetComponent<Renderer>().material.color;
         Color finalColor = new Color(startingColor.r, startingColor.g, startingColor.b, 0);
         while (elapsedTime < destroytime)
         {
             transform.GetComponent<Renderer>().material.color = Color.Lerp(startingColor, finalColor, (elapsedTime / destroytime));
             elapsedTime += Time.deltaTime;
             //yield return null;
         }
        Destroy(gameObject,destroytime);


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
