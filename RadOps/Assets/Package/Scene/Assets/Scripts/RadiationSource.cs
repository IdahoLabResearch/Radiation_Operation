using System.Collections;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Linq;
using UnityEngine;

public class RadiationSource : MonoBehaviour
{
    public float activity;
    public float energy;
    public float maximumRange;
    public float shieldingFactor;
    public float absorbtionFactor = .5f;
    public string isotope;
    private CSVReader reader;
    private bool cReady = true;
    struct Shield
    {
        public GameObject shield;
        public float thickness;

        public Shield(GameObject shield, float thickness)
        {
            this.shield = shield;
            this.thickness = thickness;
        }

    }
    private void Start()
    {
        reader = this.gameObject.GetComponent<CSVReader>();
    }
    // Update is called once per frame
    void Update()
    {if (activity > 0)
        {
            Dosimeter[] targets = GameObject.FindObjectsByType<Dosimeter>(FindObjectsSortMode.None);
            foreach (Dosimeter target in targets)
            {
                List<Shield> objects = ShieldTrace(target.transform);

                float shieldThickness = 0f;

                if (objects.Count > 0)
                {
                    foreach (Shield obj in objects)
                    {//Debug.Log(obj.GetComponent<Renderer>().material.name);
                        if (obj.shield.GetComponent<Renderer>() != null)
                        {
                            string shieldName = obj.shield.GetComponent<Renderer>().material.name;
                            shieldName = shieldName.Replace(" (Instance)", "");
                        }
                        
                        //if (reader != null)
                        {
                            //shieldingFactor = reader.GetShieldValue(isotope, shieldName);
                            // Debug.Log("Absorb " + absorbtionFactor); 
                            if (obj.shield.GetComponent<Shielding>() != null)
                            {
                                //shieldThickness += obj.GetComponent<Shielding>().shieldValue * obj.GetComponent<Renderer>().bounds.size.magnitude;
                                shieldThickness += obj.shield.GetComponent<Shielding>().shieldValue;
                                //Debug.Log("Thickness add " + shieldThickness);
                            }
                            else if (obj.shield.GetComponent<Renderer>().material.name == "Concrete (Instance)")
                            {
                                //Debug.Log("Concrete");
                                shieldThickness += (.9f * obj.thickness);
                            }
                            else if (obj.shield.GetComponent<Renderer>().material.name == "Metal (Instance)")
                            {
                                // Debug.Log("Metal");
                                shieldThickness += (2.5f * obj.thickness);
                            }
                           
                            else
                            {
                                shieldThickness += (/*0.25f */ obj.thickness);
                            }
                        }
                    }
                }
                else
                {
                    //Debug.Log("no shields");
                }
                //Debug.Log("Thickness" + shieldThickness); 
                float shieldFactor = Mathf.Pow(2.71f, (-shieldThickness * shieldingFactor));
                float randomRoll = Random.Range(.8f, 1.2f);
                float dose = activity * energy * randomRoll;
                float distance = Vector3.Distance(this.gameObject.transform.position, target.gameObject.transform.position);
                distance = Mathf.Clamp(distance, 0.001f, 10000f);
                if (distance < maximumRange)
                {
                    //dose = (Time.deltaTime * dose * .00000576f * absorbtionFactor) / (12.566f * (distance * distance)); //No shielding
                    dose = (Time.deltaTime * dose * shieldFactor * .00000576f * absorbtionFactor) / (12.566f * (distance * distance)); //Shielded
                    target.Readings.Add(dose);
                }
            }
        }
    }

    private List<Shield> ShieldTrace(Transform target)
    {
        float distance = Vector3.Distance(this.gameObject.transform.position, target.position);
        Vector3 direction = target.position - this.transform.position;  
        RaycastHit[] shields = Physics.RaycastAll(this.transform.position, direction, distance);
        Debug.DrawRay(this.gameObject.transform.position, direction, Color.red);
       
        List<float> depths = new List<float>();
        for (int i = 0; i < shields.Length; i++)
        {
            Vector3 po = shields[i].point;
            RaycastHit subHit;
            Physics.Raycast(po + (transform.TransformDirection(Vector3.forward) * shields[i].distance), (transform.TransformDirection(Vector3.forward) * -1), out subHit, Mathf.Infinity);
            //Debug.DrawRay(po, target.transform.position,  Color.red);
            depths.Add(Vector3.Distance(po, subHit.point));

        }
       // Debug.Log("Depths " + depths.Count);
        List<Shield> listShields = new List<Shield>();
        for (int i = 0; i < shields.Length; i++)
        {
            Shield x = new Shield(shields[i].transform.gameObject, depths[i]);
            listShields.Add(x); 
        }
        //Debug.Log("Shields" + listShields.Count);
            return listShields;

    }

   public void Contaminate(float contam)
    {
        if(cReady == true)
        {
            activity += contam;
            cReady = false;
            StartCoroutine(timeDelay());
        }
    }

    public IEnumerator timeDelay()
    {
        yield return new WaitForSeconds(0.3f);
        cReady = true;
    }
}
