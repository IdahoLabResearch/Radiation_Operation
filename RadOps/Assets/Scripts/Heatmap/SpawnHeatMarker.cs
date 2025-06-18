using UnityEngine;

public class SpawnHeatMarker : MonoBehaviour
{
    public GameObject prefab;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
      GameObject.Instantiate(prefab, this.transform);  
    }

    // Update is called once per frame
   
}
