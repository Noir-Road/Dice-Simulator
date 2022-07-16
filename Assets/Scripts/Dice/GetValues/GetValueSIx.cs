using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetValueSIx : DiceValue
{
    override protected Vector3 HitVector(int side)
    {
        switch (side)
        {
            case 1: return new Vector3(0f, 1f, 0f);
            case 2: return new Vector3(1f, 0f, 0f);
            case 3: return new Vector3(0f, 0f, 1f);
            case 4: return new Vector3(0f, 0f, -1f);
            case 5: return new Vector3(-1f, 0f, 0f);
            case 6: return new Vector3(0f, -1f, 0f);
        }
        return Vector3.zero;
    }
}
