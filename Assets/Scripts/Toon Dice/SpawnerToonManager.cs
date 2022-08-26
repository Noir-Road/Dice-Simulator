using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnerToonManager : MonoBehaviour
{
    public static SpawnerToonManager Instance;
    [SerializeField] Transform dice;

    void Awake() => Instance = this;




    public void SpawnNumber(PoolObjectType type)
    {
        var number = PoolManager.Instance.GetPoolObject(type);
        number.transform.position = dice.transform.position + new Vector3(0f,5f,0f);
        number.transform.rotation = Quaternion.identity;
        number.SetActive(true);
    }
    
}
