using UnityEngine;

public class ContaminationTarget : MonoBehaviour
{
    public QuadScript quad;
    public RadiationSource thisSource;
    public float activity;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        quad = this.GetComponent<QuadScript>();
        thisSource = this.GetComponent<RadiationSource>();
    }

    // Update is called once per frame
    void Update()
    {
        float newAct = 0;
        for(int i = 0; i < quad.mPoints.Length; i++) 
        {
           if((i+1) % 3 == 0)
                {
                    newAct += Mathf.Clamp((quad.mPoints[i] * 50), -50, 50);
                Debug.Log("Activity  " + quad.mPoints[i]);
                }
        }
        activity = newAct;
        thisSource.activity = activity;
    }
}
