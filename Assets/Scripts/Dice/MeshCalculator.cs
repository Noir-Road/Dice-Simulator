using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class MeshCalculator : MonoBehaviour
{
    public Vector3[] diceNormals;
    public MeshFilter filter;

    void Start() {
        diceNormals = Calculator(filter.sharedMesh);    
    }

    Vector3[] Calculator(Mesh mesh)
    {
        return mesh.normals.Distinct().ToArray();
    }
}
