using UnityEngine;

public class TransformParentChildOverride : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    public Transform linkedParent;

    // Update is called once per frame
    void Update()
    {
        this.transform.position = linkedParent.position;
        this.transform.rotation = linkedParent.rotation;    
    }
}
