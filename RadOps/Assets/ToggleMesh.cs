using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleMesh : MonoBehaviour
{
    // Start is called before the first frame update
  public void ToggleMeshVis()
    {
        this.GetComponent<MeshRenderer>().enabled = !(this.GetComponent<MeshRenderer>().enabled);
    }
}
