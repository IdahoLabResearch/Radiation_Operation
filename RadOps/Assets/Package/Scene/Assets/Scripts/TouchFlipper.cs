using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchFlipper : MonoBehaviour
{
    // Start is called before the first frame update
   public void FlipThis()
    {
        this.transform.Rotate(0, 0, 180f);
    }
}
