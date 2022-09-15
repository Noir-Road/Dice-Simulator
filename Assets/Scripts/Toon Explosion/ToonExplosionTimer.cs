using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToonExplosionTimer : MonoBehaviour
{
    void OnEnable() {
        CustomizerManager.Instance.AddexplosionsList(gameObject);
    }

    private void OnDisable() {
        PoolManager.Instance.ReturnObjectOfType(gameObject,PoolObjectType.ToonExplosion);
    }
}