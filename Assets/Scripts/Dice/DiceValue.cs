using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceValue : MonoBehaviour
{

	[SerializeField] DiceRoller diceRoller;
	public int value = 0;	
    protected Vector3 localHitNormalized;
	// hitVector check margin
    protected float validMargin = 0.45F;

	// calculate the normalized hit vector and should always return true
    protected bool localHit
    {
        get
        {
			// Shoot a ray right above the dice, targeting downwards
            Ray ray = new Ray(transform.position + (new Vector3(0, 2, 0) * transform.localScale.magnitude), Vector3.up * -1);
            RaycastHit hit = new RaycastHit();
			// If we hit a dice
            if (GetComponent<Collider>().Raycast(ray, out hit, 3 * transform.localScale.magnitude))
            {
				// we got a hit so we determine the local normalized vector from the die center to the face that was hit.
				// because we are using local space, each die side will have its own local hit vector coordinates that will always be the same.
                localHitNormalized = transform.InverseTransformPoint(hit.point.x, hit.point.y, hit.point.z).normalized;
                return true;
            }
			// in theory we should not get at this position!
            return false;
        }
    }

	// calculate this dice value
    void GetValue()
    {
		// value = 0 -> undetermined or invalid
        value = 0;
        float delta = 1;
		// start with side 1 going up.
        int side = 1;
        Vector3 testHitVector;
		// check all sides of this dice, the side that has a valid hitVector and smallest x,y,z delta (if more sides are valid) will be the closest and this dices value
        do
        {
			// get testHitVector from current side, HitVector is a overriden method in the dieType specific Die subclass
			// eacht dieType subclass will expose all hitVectors for its sides,
            testHitVector = HitVector(side);
            if (testHitVector != Vector3.zero)
            {
				// this side has a hitVector so validate the x,y and z value against the local normalized hitVector using the margin.
                if (valid(localHitNormalized.x, testHitVector.x) && valid(localHitNormalized.y, testHitVector.y) && valid(localHitNormalized.z, testHitVector.z))
                {
					// this side is valid within the margin, check the x,y, and z delta to see if we can set this side as this die's value
					// if more than one side is within the margin (especially with d10, d12, d20 ) we have to use the closest as the right side
                    float nDelta = Mathf.Abs(localHitNormalized.x - testHitVector.x) + Mathf.Abs(localHitNormalized.y - testHitVector.y) + Mathf.Abs(localHitNormalized.z - testHitVector.z);
                    if (nDelta < delta)
                    {
                        value = side;
                        delta = nDelta;
                    }
                }
            }
			// increment side
            side++;
			// if we got a Vector.zero as the testHitVector we have checked all sides of this die
        } while (testHitVector != Vector3.zero);
    }

    void Update()
    {
		// determine the value is the die is not rolling
        if (diceRoller.state == DiceRoller.Dice.IDLE && localHit)
            GetValue();
    }


	// validate a test value against a value within a specific margin.
    protected bool valid(float t, float v)
    {
        if (t > (v - validMargin) && t < (v + validMargin))
            return true;
        else
            return false;
    }

	// virtual  method that to get a die side hitVector.
	// this has to be overridden in the dieType specific subclass
    protected virtual Vector3 HitVector(int side)
    {
        return Vector3.zero;
    }
}
