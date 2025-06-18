using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Alarm : MonoBehaviour

    

{
    private bool warn;
    public float triggerLevel;
    public GameObject light;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float rate = this.gameObject.GetComponent<Dosimeter>().LastReading * 100 / this.gameObject.GetComponent<Dosimeter>().responseTime;
        if (rate > triggerLevel)
        {
            light.SetActive(true);
            light.transform.Rotate(new Vector3(0f, 3.5f, 0f));
        }
        else
        {
            light.SetActive(false);             
        }   


    }
}
