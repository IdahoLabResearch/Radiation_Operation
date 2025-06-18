using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem.HID;

public class DepthMeasure : MonoBehaviour
{
    public Transform target;
    int layerMask = 1 << 8;
    // Start is called before the first frame update


    // Update is called once per frame
    void Update()
    {
        layerMask = ~layerMask;

        RaycastHit hit;
        // Does the ray intersect any objects excluding the player layer
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask))
        {
            Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hit.distance, Color.yellow);
            RaycastHit subHit;
            Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out subHit, Mathf.Infinity, layerMask);
            RaycastHit hitBack;
            Physics.Raycast(hit.point + (transform.TransformDirection(Vector3.forward) * hit.distance), transform.TransformDirection(Vector3.forward) * -1, out hitBack, Mathf.Infinity, layerMask);
            Debug.DrawRay(hitBack.point, transform.TransformDirection(Vector3.forward) * hitBack.distance, Color.red);
            //Debug.DrawRay(subHit.point, transform.TransformDirection(Vector3.forward) * 1000, Color.red);
         Debug.Log("Distance is  " +Vector3.Distance(hit.point, hitBack.point));
            Debug.Log("Did Hit");
        }
        else
        {
           // Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * 1000, Color.red);
            Debug.Log("Did not Hit");
        }
    }
}