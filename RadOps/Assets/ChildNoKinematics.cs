using UnityEngine;

public class ChildNoKinematics : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
       foreach(Transform child in this.transform)
        {
            if(child.gameObject.GetComponent<Rigidbody>() != null)
            {
                child.gameObject.GetComponent<Rigidbody>().isKinematic = false;
            }
        }
    }

    // Update is called once per frame
   
}
