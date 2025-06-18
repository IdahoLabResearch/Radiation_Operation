using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScatterPoints : MonoBehaviour
{
    public int number = 100;
    // Start is called before the first frame update
    void Start()
    {
        PlayDelay();
      
    }
     void PlayDelay()
    {
        StartCoroutine(Delay());
    }
    IEnumerator Delay()
        {
            yield return new WaitForSecondsRealtime(2);
            for (int i = 0; i<number; i++)
            {
              float ranx = Random.Range(6f, 12f);
              float rany = Random.Range(6f, 12f);
              int ranPow = Random.Range(0, 2);

             this.GetComponent<QuadScript>().addHitPoint(ranx , rany, ranPow);
            this.GetComponent<QuadScript>().mHitCount++;
            /*if (this.GetComponent<QuadScript>().mHitCount > 31)
            {
                this.GetComponent<QuadScript>().mHitCount = 0;
            }*/
            }
        }

    // Update is called once per frame
    void Update()
    {
        
    }
}
