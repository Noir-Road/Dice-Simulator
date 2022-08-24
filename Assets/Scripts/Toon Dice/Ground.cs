using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ground : MonoBehaviour
{
    [SerializeField] Rigidbody rb;
    [SerializeField] GameObject number6;
    [SerializeField] GameObject number3;
    [SerializeField] GameObject number4;
    [SerializeField] GameObject number5;
    [SerializeField] GameObject number2;
    [SerializeField] GameObject number1;




    public Transform dice;

    public void OnCollisionStay(Collision collision)
    {
        string name = collision.gameObject.name;
        //if (collision.gameObject.GetComponent<ToonDiceRoll>().isMoving)
        //{
            switch (name)
            {
                case "C1"://rutina 1
                // Debug.Log("esto es un objeto" + other.name);
                    Debug.Log("esto es un obje" + name);
                    // Instantiate(prefab, transform.position, Quaternion.identity);
                    //Instantiate(prefab, new Vector3(0f, 5f, 0f) , Quaternion.identity);
                    //prefab.transform.localScale = new Vector3(400f, 400f, 400f);
                    Instantiate(number6, dice.transform.position + new Vector3(0f, 5f, 0f), Quaternion.identity);

                    break;
                case "C2"://rutina 2
                    Debug.Log("esto es un objeto" + name);
                    Instantiate(number5, dice.transform.position + new Vector3(0f, 5f, 0f), Quaternion.identity);
                    break;
                case "C3"://rutina 3
                    Debug.Log("esto es un objeto" + name);
                    Instantiate(number4, dice.transform.position + new Vector3(0f, 5f, 0f), Quaternion.identity);
                    break;
                case "C4"://rutina 4
                    Debug.Log("esto es un objeto" + name);
                    Instantiate(number3, dice.transform.position + new Vector3(0f, 5f, 0f), Quaternion.identity);
                    break;
                case "C5"://rutina 5
                    Debug.Log("esto es un objeto" + name);
                    Instantiate(number2, dice.transform.position + new Vector3(0f, 5f, 0f), Quaternion.identity);
                    break;
                case "C6"://rutina 6
                    Debug.Log("esto es un objeto" + name);
                    Instantiate(number1, dice.transform.position + new Vector3(0f, 5f, 0f), Quaternion.identity);
                    break;
                default:
                    Debug.Log("esto es un objeto default" + name);
                    break;
            }
        //}
    }
    public void OnCollisionEnter(Collision collision)
    {
        switch(collision.collider.name)
        {
            case "C1":
                //Debug.Log("esto es un objeto" + collision.collider.name);
                break;
            default:
               // Debug.Log("esto es un objeto default" + collision.gameObject.name);
                break;
        }
      //  Debug.Log("esto es un objeto" + collision.collider.name);

    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
