using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetValueFour : DiceValue
{
override protected Vector3 HitVector(int side)
    {
        switch (side)
        {
            case 6: return new Vector3(0f, -1f, 0f);
            case 7: return new Vector3(0f, 0f, 1f);
            case 8: return new Vector3(1f, 0f, 0f);
            case 9: return new Vector3(0f, 0f, -1f);          
        }
        return Vector3.zero;
    }
}
