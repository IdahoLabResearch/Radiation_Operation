using System.Runtime.CompilerServices;
using Unity.Netcode;
using UnityEditor.PackageManager;
using UnityEngine;

public class SpawnedObjectDeleter : NetworkBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    public NetworkObject Nob;
    public void DeleteThisObject()
    {
        GameObject goDel = GameObject.Find("ObjectDeleter");
        if (goDel != null)
        {
            if (goDel.activeSelf && this.CompareTag("Spawned"))
            {
               try
                {
                    Debug.Log("No network");
                    GameObject.Destroy(this.transform.parent.gameObject);
                    
                }
                catch
                {
                    foreach (Transform t in Nob.transform)
                    {
                        Destroy(t.gameObject);  
                    }
                    Nob.Despawn();
                }
            }
        
        }
    }

}


