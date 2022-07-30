using UnityEngine;

public class SimpleRotator : MonoBehaviour
{
    // Simple Rotator class for Main menu

    [SerializeField] Vector3 rotation;
    [SerializeField] float _speed;

    void Update()
    {
        transform.Rotate(rotation * _speed * Time.deltaTime);
    }
}
