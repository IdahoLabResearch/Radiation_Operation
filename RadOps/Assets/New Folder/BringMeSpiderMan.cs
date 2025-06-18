using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BringMeSpiderMan : MonoBehaviour
{
    public GameObject SpiderMan;
    // Start is called before the first frame update
    public static string GetGameObjectPath(GameObject obj)
    {
        string path = "/" + obj.name;
        while (obj.transform.parent != null)
        {
            obj = obj.transform.parent.gameObject;
            path = "/" + obj.name + path;
        }
        return path;
    }

    [ContextMenu("I Want to See Spider-Man")]
    public void GetSpiderMan()
    {
        Debug.Log(GetGameObjectPath(SpiderMan));
    }

}