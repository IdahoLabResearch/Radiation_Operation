using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class marker : MonoBehaviour
{
    public float reading;
    public Material material;
    // Start is called before the first frame update
    public void StartOperation()
    {
        this.GetComponent<Renderer>().material = Instantiate(material);
        Color temp = new Color(reading * 30, 255f - (reading * 30), 0f, 0.2f);
        this.transform.GetComponent<Renderer>().sharedMaterial.color = temp;
        float scaleVal = Mathf.Log((reading * 4f)) / 7f;
        scaleVal = Mathf.Clamp(scaleVal, 0.02f, 0.35f);
        this.transform.localScale = new Vector3(scaleVal, scaleVal, scaleVal);
    }
    public void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.gameObject.GetComponent<marker>() != null)
        {
            float otherReading = other.gameObject.GetComponent<marker>().reading;
            if (reading < otherReading)
            {
                other.gameObject.GetComponent<marker>().Combine(reading);
                Destroy(this.gameObject);
            }
            else
            {
                Combine(otherReading);
                Destroy(other.gameObject);
            }
        }
    }

    public void Combine(float newReading)
    {
        if (reading + newReading < 1f)
        {
            this.reading += newReading;
            Color temp = new Color(reading * 30, 255f - (reading * 30), 0f, 0.2f);
            this.transform.GetComponent<Renderer>().material.color = temp;
            float scaleVal = (reading / 30f);
            scaleVal = Mathf.Clamp(scaleVal, 0.02f, 0.35f);
            this.transform.localScale = new Vector3(scaleVal, scaleVal, scaleVal);
        }
    }
}
