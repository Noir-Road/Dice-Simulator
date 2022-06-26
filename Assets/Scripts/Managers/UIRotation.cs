using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIRotation : MonoBehaviour
{
    [SerializeField] Vector3 rotation;
    [SerializeField] float speed;

    void Update()
    {
        transform.Rotate(rotation * speed * Time.deltaTime);
    }
}
