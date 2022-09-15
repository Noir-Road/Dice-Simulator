using System.Collections.Generic;
using UnityEngine;

public enum PoolObjectType
{
    FourSides,
    SixSides,
    EightSides,
    TenSides,
    TwelveSides,
    TwentySides,
    NumberOne,
    NumberTwo,
    NumberThree,
    NumberFour,
    NumberFive,
    NumberSix,
    ToonExplosion,
}
public class PoolManager : Singleton<PoolManager>
{
    [SerializeField] List<PoolInfo> listOfPool;
    Vector3 defaultPos = new Vector3(0f, 0f, 0f);
    private void Start()
    {
        for (int i = 0; i < listOfPool.Count; i++)
        {
            FillPool(listOfPool[i]);
        }
    }
    void FillPool(PoolInfo info) // Fill the Pool
    {
        for (int i = 0; i < info.amount; i++)
        {
            GameObject obInstance = null;
            obInstance = Instantiate(info.prefab, info.container.transform);
            obInstance.gameObject.SetActive(false);
            obInstance.transform.position = defaultPos;
            info.pool.Add(obInstance);
        }
    }
    public GameObject GetPoolObject(PoolObjectType type) // Get an object from the pool
    {
        PoolInfo selected = GetPoolByType(type);
        List<GameObject> pool = selected.pool;

        GameObject obinstance = null;
        if (pool.Count>0)
        {
            obinstance = pool[pool.Count - 1];
            pool.Remove(obinstance);
        }
        else
        {
            obinstance = Instantiate(selected.prefab, selected.container.transform);
        }
        return obinstance;
    }
    public void ReturnObjectOfType(GameObject ob, PoolObjectType type) // Return an object to pool
    {
        ob.SetActive(false);
        ob.transform.position = defaultPos;

        PoolInfo selected = GetPoolByType(type);
        List<GameObject> pool = selected.pool;

        if (!pool.Contains(ob))
        {
            pool.Add(ob);
        }
    }
    PoolInfo GetPoolByType(PoolObjectType type)
    {
        for (int i = 0; i < listOfPool.Count; i++)
        {
            if (type == listOfPool[i].type) return listOfPool[i];
        }
            return null;
    }
}

[System.Serializable]
public class PoolInfo
{
    public PoolObjectType type;
    public int amount;
    public GameObject prefab;
    public GameObject container;

    [HideInInspector]
    public List<GameObject> pool = new List<GameObject>();
}