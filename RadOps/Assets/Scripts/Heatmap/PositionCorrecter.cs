using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PositionCorrecter : MonoBehaviour
{
    public Vector3 root;

    // Update is called once per frame
    void Update()
    {
        this.transform.localPosition = root;
        this.transform.rotation = new Quaternion(0,0,0,0);
    }
}
