using UnityEngine;
using Sirenix.OdinInspector;
public class SpawnerManager : Singleton<SpawnerManager>
{ 
    [InfoBox("Dice will spawn in a random position around the screen")]
    [Header("Spawn Position - Fixed Values -")]
    [SerializeField] float rangeX = 25f;
    [SerializeField] float rangeY = 17f;
    [SerializeField] float rangeZ = 14f;

    public void PickDice(string _dice)
    {
        switch (_dice)
        {
            case "Four":
                if(ClearBoard.Instance.CheckList())
                    SpawnDice(PoolObjectType.FourSides);
                break;
            case "Six":
                if(ClearBoard.Instance.CheckList())
                    SpawnDice(PoolObjectType.SixSides);
                break;
            case "Eight":
                if(ClearBoard.Instance.CheckList())
                    SpawnDice(PoolObjectType.EightSides);
                break;
            case "Ten":
                if(ClearBoard.Instance.CheckList())
                    SpawnDice(PoolObjectType.TenSides);
                break;
            case "Twelve":
                if(ClearBoard.Instance.CheckList())
                    SpawnDice(PoolObjectType.TwelveSides);
                break;
            case "Twenty":
                if(ClearBoard.Instance.CheckList())
                    SpawnDice(PoolObjectType.TwentySides);
                break;
        }
    }
    
    public void SpawnDice(PoolObjectType type)
    {
        var ob = PoolManager.Instance.GetPoolObject(type);
        ob.transform.position = RandomPosition();
        ob.SetActive(true);
    }
    
    Vector3 RandomPosition() // Get a random position within screen boundaries.
    {
        var randomPosition = new Vector3(Random.Range(-rangeX, rangeX),Random.Range(16.8f, rangeY),Random.Range(-rangeZ, rangeZ));
        return randomPosition;
    }
}

[System.Serializable]
public class SpawnerClass // Handles a Random Position around the screen
{
    public PoolObjectType poolObject;
    [InfoBox("Dice will spawn in a random position around the screen")]
    [Header("Spawn Position - Fixed Values -")]
    [SerializeField] float rangeX = 25f;
    [SerializeField] float rangeY = 17f;
    [SerializeField] float rangeZ = 14f;

    Vector3 RandomPosition(PoolObjectType type) // Get a random position within screen boundaries.
    {
        var ob = PoolManager.Instance.GetPoolObject(type);
        var randomPosition = new Vector3(Random.Range(-rangeX, rangeX),Random.Range(16.8f, rangeY),Random.Range(-rangeZ, rangeZ));
        ob.transform.position = randomPosition;
        return randomPosition;
    }
}