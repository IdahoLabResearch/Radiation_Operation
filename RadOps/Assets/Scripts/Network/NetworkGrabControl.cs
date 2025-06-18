using Unity.Netcode;
using UnityEngine;

public class NetworkGrabControl : MonoBehaviour
{
    public GameObject grabControl;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    [ServerRpc(RequireOwnership = false)]   
    public void GrabOn()
    {
        grabControl.SetActive(true);
    }

    [ServerRpc(RequireOwnership = false)]
    public void GrabOff()
    {
        grabControl.SetActive(false);
    }


}
