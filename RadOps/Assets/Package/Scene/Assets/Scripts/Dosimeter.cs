using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class Dosimeter : MonoBehaviour
{
    public List<float> Readings = new List<float>();
    public float responseTime;
    public float efficiency = 1;
    public float TotalReading;
    public float TotalRealDose;
    private float period = 0;
    public float LastReading;
    public string readTotal;
    public string readRate;
    public GameObject marker;
    public bool sv = true;
    public Color textColor = Color.white;

    // Update is called once per frame
    void Update()
    {
        float measurement = 0;
        period += Time.deltaTime;
        if (period > responseTime)
        {
            foreach (float dose in Readings)
            {
                measurement += dose;

            }
            TotalRealDose += measurement / (3600f);
            TotalReading += measurement * efficiency;
            Readings.Clear();
            period = 0;
            LastReading = measurement;

            if (marker != null)
            {
                //Debug.Log("Marking");
                //Create a new history marker
                GameObject newMark = (GameObject)Instantiate(marker, this.transform.position, new Quaternion(0f, 0f, 0f, 0f));
                newMark.transform.GetChild(0).GetComponent<marker>().reading = LastReading;
                newMark.transform.GetChild(0).GetComponent<marker>().StartOperation();
                /*
                Color temp = new Color(LastReading * 4, 255f - (LastReading * 4), 0f);
                newMark.transform.GetChild(0).GetComponent<Renderer>().material.color = temp;
                newMark.transform.GetChild(0).localScale = new Vector3(LastReading / 10f, LastReading / 10f, LastReading / 10f);
                */
            }
            else
            {
                //Debug.Log("No");
            }
        }
        if (sv)
        {
            if (TotalRealDose < 1000f)
            {
                readTotal = (TotalRealDose * 100 / responseTime).ToString("f3") + " µSv";
            }
            else if (TotalRealDose < 1000000f)
            {
                readTotal = (TotalRealDose * .1 / responseTime).ToString("f3") + " mSv";
            }
            else
            {
                readTotal = (TotalRealDose * .001f / responseTime).ToString("f3") + " Sv";
            }
            if (LastReading < 1000f)
            {
                readRate = (LastReading * 100 / responseTime).ToString("f3") + " µSv/Hr";
                textColor = Color.white;
            }
            else if (LastReading < 1000000f)
            {
                readRate = (LastReading * .1 / responseTime).ToString("f3") + " mSv/Hr";
                textColor = Color.yellow;
            }
            else
            {
                readRate = (LastReading * .001f / responseTime).ToString("f3") + " Sv/Hr";
                textColor = Color.red;
            }

        }
        else
        {
            if (TotalRealDose < 10f)
            {
                readTotal = (TotalRealDose * 10000 / responseTime).ToString("f2") + " µRem";
            }
            else if (TotalRealDose < 1000f)
            {
                readTotal = (TotalRealDose * 10 / responseTime).ToString("f1") + " mRem";
            }
            else
            {
                readTotal = (TotalRealDose / responseTime).ToString("f0") + " Rem";
            }
            if (LastReading < 0.1f)
            {
                readRate = (LastReading * 10000 / responseTime).ToString("f2") + " µRem/Hr";
                textColor = Color.white;
            }
            else if (LastReading < 100f)
            {
                readRate = (LastReading * 10 / responseTime).ToString("f1") + " mRem/Hr";
                textColor = Color.yellow;
            }
            else
            {
                readRate = (LastReading / responseTime).ToString("f0") + " Rem/Hr";
                textColor = Color.red;
            }
        }
    }       
   
}
