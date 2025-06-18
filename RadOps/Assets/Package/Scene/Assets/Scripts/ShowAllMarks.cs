using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowAllMarks : MonoBehaviour
{
    public bool show;
    // Start is called before the first frame update
   public void ShowAllMarkers()
    {
        if (!show)
        {
            marker[] marks = FindObjectsOfType<marker>();
            foreach (marker mark in marks)
            {
                mark.gameObject.GetComponent<Renderer>().enabled = true;
            }
            show = true;
        }
        else
        {
            {
                marker[] marks = FindObjectsOfType<marker>();
                foreach (marker mark in marks)
                {
                    mark.gameObject.GetComponent<Renderer>().enabled = false;
                }
                show = false;
            }
        }
    }
}
