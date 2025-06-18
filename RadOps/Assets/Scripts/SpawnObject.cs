using Unity.Netcode;
using UnityEngine;

public class SpawnObject : NetworkBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    public NetworkObject spawnObject;
    public Camera player;

    private void Start()
    {
        player = Camera.main;   
    }
    [ContextMenu("Spawn Item")]
    public void CallSpawnFromButton()
    {
        if (IsHost == true)
        {
            //Instantiate(objReference
            CallSpawnServerRpc();
        }
        else
        {

            Debug.Log("Spawn");
            Vector3 spawnPos = player.gameObject.transform.position + (player.transform.forward * .2f);
            spawnPos.y = 0f;
            Instantiate(spawnObject, spawnPos, Quaternion.identity);
            CallSpawnServerRpc();

        }
    
}
    [ServerRpc(RequireOwnership = false)]
    public void CallSpawnServerRpc()
    {
        Debug.Log("Spawn");
        Vector3 spawnPos = player.gameObject.transform.position  + (player.transform.forward * .2f);
        spawnPos.y = 0f;
        NetworkObject instance = Instantiate(spawnObject, spawnPos, Quaternion.identity);
        var instanceNetworkObject = instance.GetComponent<NetworkObject>();
        instance.Spawn();
    }
}
