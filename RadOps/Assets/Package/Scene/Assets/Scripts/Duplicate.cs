using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UIElements;
using static Microsoft.MixedReality.GraphicsTools.MeshInstancer;

/// <summary>
/// This script is meant to duplicate this object after it has been picked up. Giving it a 
/// limitless 'deck of cards' feel.
/// </summary>
public class Duplicate : NetworkBehaviour
{
    public NetworkObject objReference;
    public bool duplicated = false;
    private NetworkVariable<bool> netDupe = new Unity.Netcode.NetworkVariable<bool>(false, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
    private Vector3 startPos;
    private Quaternion startRot;
    // Start is called before the first frame update
    void Start()
    {
        startPos = this.transform.position;
        startRot = this.transform.rotation;
        //if (NetworkManager.Singleton.isActiveAndEnabled)
        {
            
            duplicated = netDupe.Value;
            if (IsHost == false)
            {
                //this.GetComponent<NetworkObject>().SpawnWithOwnership(OwnerClientId, false);
                ClientSpawnClientRpc();
            }
        }
    }
    private void Update()
    {
        duplicated = netDupe.Value;

    }

    public void DuplicateAfterPickup()
    {
        //duplicated = netDupe.Value; 
        StartCoroutine(Dupe());
    }

     IEnumerator Dupe()
    {
        yield return new WaitForEndOfFrame();   
        //yield return new WaitForSeconds(0.02f);
        if (!netDupe.Value)
        {
            if (IsHost == true)
            {
                netDupe.Value = true;
                //Instantiate(objReference
                ServerSpawnServerRpc();
            }
            else
            {
                netDupe.Value = true;
                Instantiate(objReference, startPos, startRot);
                //var instance = Instantiate(objReference);
                ServerSpawnServerRpc();

            }
        }
    }
    public void DropCall()
    {
        this.gameObject.GetComponent<Rigidbody>().isKinematic = true;
        //this.gameObject.GetComponent<NetworkClientTransform>().Teleport(this.transform.position, this.transform.rotation, this.transform.localScale);
    }
    [ServerRpc(RequireOwnership = false)]
    public void ServerSpawnServerRpc()
    {
        
        NetworkObject instance = Instantiate(objReference, startPos, startRot);
        //instance.transform.localScale = this.transform.localScale;           
        var instanceNetworkObject = instance.GetComponent<NetworkObject>();
        instance.Spawn();
        // netDupe.Value = this.duplicated;   
        DupeSetServerRpc();
    }
    [ServerRpc(RequireOwnership = false)]
    public void DupeSetServerRpc()
    {
        netDupe.Value = true;
    }
 
    [ClientRpc]
    public void ClientSpawnClientRpc()
    {
        NetworkObject instance = Instantiate(objReference, startPos, startRot);
        //var instanceNetworkObject = instance.GetComponent<NetworkObject>();
        instance.Spawn();        
        NetworkManager.Singleton.SpawnManager.InstantiateAndSpawn(instance, NetworkManager.ServerClientId);
        DupeSetServerRpc();
    }


}
