using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawn : MonoBehaviour
{
    public int productionTarget;
    public GameObject Object;
    private int production;
    private float count;

    // Update is called once per frame
    void Update()
    {
        count++;
        if (count >= 5)
        {
            if (production < productionTarget)
            {
                Instantiate(Object, this.transform.position, new Quaternion(0f, 0f, 0f, 0));
                production++;
            }
            count = 0f;
        }
    }
}
