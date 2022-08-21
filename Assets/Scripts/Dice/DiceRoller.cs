using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(MeshFilter))]
public class DiceRoller : MonoBehaviour
{
    [Header("Object Pool")]
    [SerializeField] PoolObjectType type;

    [Header("Object Physics")]
    public float upDiceForce;
    public float rotationSpeed;
    public float rotationAngles;
    public float impulseDirection;
    public float mutiplyGravity;
    [SerializeField] Vector3 _rotation;

    [Header("Object Components")]
    public Rigidbody rb;
    [SerializeField] MeshCollider meshCollider;

    public enum Dice { IDLE, ROLLING }
    public Dice state;
    public bool isRolling;

    public bool toggle_rolled = false;
    public static bool debug = false;

    public Vector3[] diceNormals;
    private MeshFilter filter;

    void Start()
    {

        ClearBoard.Instance.AddDices(gameObject);
        Debug.Log(" START MC Name: " + meshCollider.sharedMesh.name);

    }
    private Vector3[] CalculateNormals(Mesh mesh)
    {
        foreach (Vector3 vector3 in mesh.normals.Distinct().ToArray().ToArray())
        {
            Debug.Log("Normals distinct: " + vector3);
        }
        return mesh.normals.Distinct().ToArray().ToArray();
    }



    private void OnEnable()
    {
        DiceLord.Roll += DiceRolling; //Subscribing
        meshCollider.enabled = true;
        LoadValues();
    }

    private void OnDisable()
    {
        DiceLord.Roll -= DiceRolling; // Unsubscribing
    }


    void DiceRolling()
    {
        state = Dice.ROLLING;
        LiftDice(); // Lift Dice upwards
        RequestNewRotationValues(); // Rotate Dice in all axis
        RequestNewImpulse(); // Impulse Dice in all axis
    }
    [SerializeField] Vector3 Pos;
    [SerializeField] Vector3 Fw;


    internal  RaycastHit hitDataRayDiceToBox, hitDataRayRoofToDice;

    //Roof for ray Casting
    internal static GameObject roof;

    public bool toggle_getV2Coords = true;
    public bool isMoving = false;

    public Ray rayDiceToBox, rayRoofToDice, rayDiceNormalA, rayDiceNormalB;
    void Update()
    {

        //If gameObject fall return instance to pool
        if (transform.position.y <= -17f)
            PoolManager.Instance.ReturnObjectOfType(gameObject, type);

        if (rb.velocity != Vector3.zero)
            isMoving = true;
        else
            isMoving = false;

        if (Input.GetMouseButton(1))
            debug = debug ? false : true;

        Pos = transform.position;
        Fw = transform.forward;

        roof = GameObject.FindGameObjectWithTag("Roof");

        if (state == Dice.ROLLING)
        {
            transform.Rotate(_rotation * rotationSpeed * Time.deltaTime);
            toggle_rolled = true;
            toggle_getV2Coords = true;
        }
        else if (state == Dice.IDLE)
        {
            rayDiceToBox = new Ray(transform.position, transform.forward);

            if (Physics.Raycast(rayDiceToBox, out hitDataRayDiceToBox) && toggle_rolled)
            {
                // The Ray hit something Wall!
                string name = hitDataRayDiceToBox.collider.name;
            }

            toggle_rolled = false;

            if (toggle_getV2Coords && !isMoving)
            {
                getV2Coords();
                toggle_getV2Coords = false;
            }

            //For Debug
            if(!toggle_getV2Coords && debug)
            {
                Debug.Log("DICE: " + gameObject.name + " INSTANCE G.O.: " + (ulong)(long)(gameObject.GetHashCode()) + " HIT: " + name);
                Debug.Log(" HIT Name: " + hitDataRayRoofToDice.collider.name);
                Debug.Log(" HIT Dice Hit: " + hitDataRayRoofToDice.point);
                Debug.Log(" HIT Triangle Index: " + hitDataRayRoofToDice.triangleIndex);
                Debug.Log(" HIT Texture Coords: " + hitDataRayRoofToDice.textureCoord);

                //Debug.DrawRay(rayRoofToDice.origin, rayRoofToDice.direction*500, Color.magenta);

                rayDiceNormalA = new Ray(transform.position, transform.forward);
                rayDiceNormalB = new Ray(transform.position, -transform.forward);

                Debug.DrawRay(rayDiceNormalA.origin, rayDiceNormalA.direction * 500, Color.green);
                Debug.DrawRay(rayDiceNormalB.origin, rayDiceNormalB.direction * 500, Color.red);

                // Find the line from the gun to the point that was clicked.
                Vector3 incomingVec = hitDataRayRoofToDice.point - roof.transform.position;

                // Use the point's normal to calculate the reflection vector.
                //Vector3 reflectVec = Vector3.Reflect(incomingVec, hitDataRayRoofToDice.normal);

                // Draw lines to show the incoming "beam" and the reflection.
                Debug.DrawLine(roof.transform.position, hitDataRayRoofToDice.point, Color.blue);
                //Debug.DrawRay(hitDataRayRoofToDice.point, reflectVec, Color.yellow);

                Mesh mesh = meshCollider.sharedMesh;
                Vector3[] vertices = mesh.vertices;
                int[] triangles = mesh.triangles; 

                Vector3 p0 = vertices[triangles[hitDataRayRoofToDice.triangleIndex * 3 + 0]];
                Vector3 p1 = vertices[triangles[hitDataRayRoofToDice.triangleIndex * 3 + 1]];
                Vector3 p2 = vertices[triangles[hitDataRayRoofToDice.triangleIndex * 3 + 2]];

                Transform hitTransform = hitDataRayRoofToDice.collider.transform;
                p0 = hitTransform.TransformPoint(p0);
                p1 = hitTransform.TransformPoint(p1);
                p2 = hitTransform.TransformPoint(p2);

                //Draw triangle hitted Enable for testing , disable by default
                Debug.DrawLine(p0, p1,Color.cyan);
                Debug.DrawLine(p1, p2,Color.magenta);
                Debug.DrawLine(p2, p0,Color.blue);

            }

        }
        //Z == North
        //-Z == South
        //X == West
        //-X == East
        //Y == Roof
        //-Y == Ground
    }

    Texture2D duplicateTexture(Texture2D source, Vector3 pixelUV)
    {
        RenderTexture renderTex = RenderTexture.GetTemporary(
                    source.width,
                    source.height,
                    0,
                    RenderTextureFormat.Default,
                    RenderTextureReadWrite.Linear);

        Graphics.Blit(source, renderTex);
        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = renderTex;
        Texture2D readableText = new Texture2D(source.width, source.height);
        readableText.ReadPixels(new Rect(0, 0, renderTex.width, renderTex.height), 0, 0);
        readableText.SetPixel((int)pixelUV.x, (int)pixelUV.y, Color.red);
        readableText.Apply();
        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(renderTex);
        return readableText;
    }

    void FixedUpdate()
    {
        if (!(state == Dice.ROLLING)) return;
        rb.AddForce(Physics.gravity * mutiplyGravity, ForceMode.Acceleration);

    }

    void LiftDice()
    {
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.up * upDiceForce); // Raise the dice force
    }

    void RequestNewRotationValues()
    {
        float dirX = RandomRotation();
        float dirY = RandomRotation();
        float dirZ = RandomRotation();
        _rotation.x = dirX;
        _rotation.y = dirY;
        _rotation.z = dirZ;
    }

    public void getV2Coords()
    {
        Debug.Log("getV2Coords");
        //WORKAROUND: For detect collision with Meshcollider and RigidBody (turn true - false)
        //Non-convex MeshCollider with non-kinematic Rigidbody is no longer supported since Unity 5. 
        rb.isKinematic = true;
        meshCollider.convex = false;

        //ray from roof to dice center
        rayRoofToDice = new Ray(roof.transform.position, (transform.position - roof.transform.position).normalized);

        //Debug.DrawLine(roof.transform.position, transform.position, Color.cyan,1000f);
        if (Physics.Raycast(rayRoofToDice, out hitDataRayRoofToDice))
        {
            IdentifyDice(hitDataRayRoofToDice.triangleIndex);
        }

        rb.isKinematic = false;
        meshCollider.convex = true;
    }

    void IdentifyDice(int tringleIndex)
    {
        int dice = -1;

        switch (PoolObjectType.SixSides)
        {
            case PoolObjectType.FourSides:
                Debug.Log("Dice 4: FourSides");
                dice = 4;
                break;
            case PoolObjectType.SixSides:
                IdentifyDiceSide(tringleIndex);
                dice = 6;
                Debug.Log("Dice 6: SixSides");
                break;
            case PoolObjectType.EightSides:
                Debug.Log("Dice 8: EightSides");
                dice = 8;
                break;
            case PoolObjectType.TenSides:
                Debug.Log("Dice 10: TenSides");
                dice = 10;
                break;
            case PoolObjectType.TwelveSides:
                Debug.Log("Dice 12: TwelveSides");
                dice = 12;
                break;
            case PoolObjectType.TwentySides:
                Debug.Log("Dice 20: TwentySides");
                dice = 20;
                break;
            default:
                // code block
                break;
        }
        //Debug.Log("The Dice is: [........[ "+ dice + " ]..........]");
    }

    void IdentifyDiceSide(int tringleIndex)
    {
        int side = -1;

        if (tringleIndex == 0 || tringleIndex == 1)
            side = 1;
        else if (tringleIndex == 10 || tringleIndex == 11)
            side = 2;
        else if (tringleIndex == 4 || tringleIndex == 5)
            side = 3;
        else if (tringleIndex == 8 || tringleIndex == 9)
            side = 4;
        else if (tringleIndex == 6 || tringleIndex == 7)
            side = 5;
        else if (tringleIndex == 2 || tringleIndex == 3)
            side = 6;

        Debug.Log("The Side is: [........[ " + gameObject.name + " ]..........]");
        Debug.Log("The Side is: [..............[ " + side + " ]...............]");
    }

    void RequestNewImpulse()
    {
        float dirX = RandomImpulse();
        float dirY = RandomImpulse();
        float dirZ = RandomImpulse();
        rb.AddForce(dirX, 0, dirZ, ForceMode.Acceleration);
    }

    float RandomRotation() => Random.Range(-rotationAngles, rotationAngles); // Random Velocity for all axis

    float RandomImpulse() => Random.Range(-impulseDirection, impulseDirection);

    void LoadValues()
    { //TODO SHORT OUT THIS METHOD
        if (PlayerPrefs.HasKey("Force"))
        {
            upDiceForce = PlayerPrefs.GetFloat("Force");
        }

        if (PlayerPrefs.HasKey("Rotation"))
        {
            rotationSpeed = PlayerPrefs.GetFloat("Rotation");
        }

        if (PlayerPrefs.HasKey("Angles"))
        {
            rotationAngles = PlayerPrefs.GetFloat("Angles");
        }

        if (PlayerPrefs.HasKey("Mass"))
        {
            rb.mass = PlayerPrefs.GetFloat("Mass");
        }
    }
}
