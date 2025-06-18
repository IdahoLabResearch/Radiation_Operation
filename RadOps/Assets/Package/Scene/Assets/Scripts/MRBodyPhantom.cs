using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MRBodyPhantom : MonoBehaviour
{
    public GameObject targetPos;
   

    // Update is called once per frame
    void Update()
    {
        this.gameObject.transform.position = targetPos.transform.position;  
    }
}
