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
    
    public enum Dice{IDLE, ROLLING}
    public Dice state;
    public bool isRolling;

    public bool toggle_rolled = false;

    public Vector3[] diceNormals;
    private MeshFilter filter;

    void Start()
    {
        
        filter = GetComponent<MeshFilter>();
        //meshCollider.enabled = true;
        //meshCollider = gameObject.AddComponent<MeshCollider>();

    }
    private Vector3[] CalculateNormals(Mesh mesh)
    {
        foreach(Vector3 vector3 in mesh.normals.Distinct().ToArray().ToArray() )
        {
            Debug.Log("Normals distinct: " + vector3);
        }
        return mesh.normals.Distinct().ToArray().ToArray();
    }



    private void OnEnable() {
        DiceLord.Roll += DiceRolling; //Subscribing
        ClearBoard.Instance.AddDices(gameObject);
        meshCollider.enabled = true;
        LoadValues();
    }

    private void OnDisable() {
        DiceLord.Roll -= DiceRolling; // Unsubscribing
    }


    void DiceRolling()
    {
        state = Dice.ROLLING;
        LiftDice(); // Lift Dice upwards
        RequestNewRotationValues(); // Rotate Dice in all axis
        RequestNewImpulse(); // Impulse Dice in all axis
    }
Ray rayDiceToBox, rayRoofToDice, rayDiceNormalA, rayDiceNormalB;

    RaycastHit hitDataRayDiceToBox, hitDataRayRoofToDice;

    [SerializeField] Vector3 Pos;
    [SerializeField] Vector3 Fw;
    void Update()
    {

        Pos = transform.position;
        Fw = transform.forward;

        if (state == Dice.ROLLING)
        {
            transform.Rotate(_rotation * rotationSpeed * Time.deltaTime);
            toggle_rolled = true;
        }
        else if (state == Dice.IDLE)
        {
    
            rayDiceToBox = new Ray(transform.position, transform.forward);
            
            if (Physics.Raycast(rayDiceToBox, out hitDataRayDiceToBox) && toggle_rolled)
            {
                // The Ray hit something!
                string name = hitDataRayDiceToBox.collider.name;
                //Vector3 v = gameObject.meshCollider.bounds.extents;
                Debug.Log("DICE: " + gameObject.name + " INSTANCE: " +gameObject.GetHashCode().ToString()+ " HIT SOMETHING AFTER ROLLING: " + name);

                //Debug.Log("Dice Center:" + transform.position);
                //Debug.Log("Mesh Collider Center:" + meshCollider.bounds.center);
                //Debug.DrawLine(meshCollider.bounds.center, meshCollider.bounds.center * 3, Color.blue, 1000f);

            }
            toggle_rolled = false;


            if (!Input.GetMouseButton(0))
                return;

            //Get the roof
            GameObject roof = GameObject.FindGameObjectWithTag("Roof");
            
            //ray from roof to dice center
            rayRoofToDice = new Ray(roof.transform.position, (transform.position - roof.transform.position).normalized);

            //Debug.DrawLine(roof.transform.position, transform.position, Color.cyan,1000f);
            if (Physics.Raycast(rayRoofToDice, out hitDataRayRoofToDice))
            {
                Debug.DrawRay(rayRoofToDice.origin, rayRoofToDice.direction*500, Color.magenta);
                Debug.Log(" HIT Name: " + hitDataRayRoofToDice.collider.name);
                Debug.Log(" HIT SharedMesh: " + hitDataRayRoofToDice.collider.gameObject.GetComponent<MeshCollider>().sharedMesh);
                Debug.Log(" HIT SharedMesh: " + hitDataRayRoofToDice.collider.gameObject.GetComponent<MeshCollider>().sharedMesh.normals);
                Debug.Log(" HIT SharedMesh: " + hitDataRayRoofToDice.collider.gameObject.GetComponent<MeshCollider>().sharedMesh.vertexCount);
                Debug.Log(" HIT Dice Center: " + hitDataRayRoofToDice.point);


                Debug.Log(" TriangelIdex: " + hitDataRayRoofToDice.triangleIndex);
                Debug.Log(" TextureCoords: " + hitDataRayRoofToDice.textureCoord);
                //hitData2.collider.gameObject.transform.GetComponent<Renderer>().forceRenderingOff=true;

                MeshCollider meshC = gameObject.GetComponent<MeshCollider>();
                //meshC = hitDataRayRoofToDice.collider as MeshCollider;
                if (meshC == null || meshC.sharedMesh == null)
                    return;

                Mesh mesh = meshC.sharedMesh;
                Vector3[] vertices = mesh.vertices;
                int[] triangles = mesh.triangles; 
                Debug.Log(" HIT TRIANGLES: " + triangles.Length);
                Debug.Log(" HIT VERTICES: " + vertices.Length);
                Debug.Log("TIndex" + hitDataRayRoofToDice.triangleIndex);
/*              Vector3 p0 = vertices[triangles[hitDataRayRoofToDice.triangleIndex * 3 + 0]];
                Vector3 p1 = vertices[triangles[hitDataRayRoofToDice.triangleIndex * 3 + 1]];
                Vector3 p2 = vertices[triangles[hitDataRayRoofToDice.triangleIndex * 3 + 2]]; */
                Vector3 p0 = vertices[triangles[0 * 3 + 0]];
                Vector3 p1 = vertices[triangles[0 * 3 + 1]];
                Vector3 p2 = vertices[triangles[0 * 3 + 2]];
                Transform hitTransform = hitDataRayRoofToDice.collider.transform;
                p0 = hitTransform.TransformPoint(p0);
                p1 = hitTransform.TransformPoint(p1);
                p2 = hitTransform.TransformPoint(p2);
                Debug.DrawLine(p0, p1,Color.cyan,1000f);
                Debug.DrawLine(p1, p2,Color.magenta,1000f);
                Debug.DrawLine(p2, p0,Color.blue,1000f);



/*                 Renderer rend = hitDataRayRooftoDice.transform.GetComponent<Renderer>();
                MeshCollider meshCollider1 = hitDataRayRooftoDice.collider as MeshCollider;

                if (rend == null || rend.sharedMaterial == null || rend.sharedMaterial.mainTexture == null || meshCollider1 == null)
                    return;


                Texture2D tex = hitDataRayRooftoDice.collider.gameObject.transform.GetComponent<Renderer>().material.mainTexture as Texture2D;
                Vector2 pixelUV = hitDataRayRooftoDice.textureCoord;
                pixelUV.x *= 5;
                pixelUV.y *= 5;
    
                gameObject.GetComponent<Renderer>().material.mainTexture = duplicateTexture(tex,pixelUV);
                rend.material.mainTexture = duplicateTexture(tex,pixelUV);

                
                tex.SetPixel((int)pixelUV.x, (int)pixelUV.y, Color.red);
                tex.Apply(); */

            }
        }
        //
        if (transform.position.y <= -17f)
            PoolManager.Instance.ReturnObjectOfType(gameObject,type);

        //Z == North
        //-Z == South
        //X == West
        //-X == East
        //Y == Roof
        //-Y == Ground
        
        //For Debug
        rayDiceNormalA = new Ray(transform.position, transform.forward);
        rayDiceNormalB = new Ray(transform.position, -transform.forward);

        Debug.DrawRay(rayDiceNormalA.origin, rayDiceNormalA.direction * 500, Color.green);
        Debug.DrawRay(rayDiceNormalB.origin, rayDiceNormalB.direction * 500, Color.red);

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
        if(!(state == Dice.ROLLING)) return;
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

    void RequestNewImpulse()
    {
        float dirX = RandomImpulse();
        float dirY = RandomImpulse();
        float dirZ = RandomImpulse();
        rb.AddForce(dirX,0,dirZ, ForceMode.Acceleration);
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
