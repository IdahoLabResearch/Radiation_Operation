using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

public class ObjectDeletionZone : NetworkBehaviour
{
    // Start is called before the first frame update
    public void OnTriggerEnter(Collider other)
    {
        if(IsHost || IsClient == true)
        {
           NetworkObject Nob = other.gameObject.GetComponent<NetworkObject>();
           Nob.Despawn();
        }
        else
        {
            Destroy(other.gameObject);
        }
    }
}
