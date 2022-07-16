using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
public class DiceFaceCalculator : MonoBehaviour
{
    public Vector3[] diceFaces;
    public MeshFilter filter;

    private void Start() {
        diceFaces = CalculateFaceVector(filter.sharedMesh);
    }

    Vector3[] CalculateFaceVector(Mesh _mesh)
    {
        return _mesh.normals.Distinct().ToArray();
    }

}
