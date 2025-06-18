using TMPro;
using Unity.Netcode;
using UnityEngine;

public class NetworkStatus : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    public NetworkManager NetworkManager;
    public TextMeshPro text;

    // Update is called once per frame
    void Update()
    {
        if (NetworkManager != null)
        {
            if (NetworkManager.IsHost == true)
            {
                text.text = "Host";
            }
            else if (NetworkManager.IsClient == true)
            {
                text.text = "Client";
            }
            else
            {
                text.text = "No network";
            }
        }
    }
}
