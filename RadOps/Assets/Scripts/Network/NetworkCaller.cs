using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Net;
using TMPro;
using Unity.Netcode;
using Unity.Netcode.Transports.UTP;
using UnityEngine;

public class NetworkCaller : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject player;
    public NetworkManager networkManager;
    public TextMeshPro tmpHost;
    public TextMeshPro tmpClient;
    public string defaultIP;
    private void Start()
    {
        GetLocalIPAddress();
    }
    public string GetLocalIPAddress()
    {
        var host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (var ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                tmpHost.text = ip.ToString();
                return ip.ToString();
            }
        }
        throw new System.Exception("No network adapters with an IPv4 address in the system!");
    }
    [ContextMenu("Host")]
    public void Host()
    {
        // player.SetActive(false);
        string address = tmpHost.text;
        //networkManager.gameObject.GetComponent<UnityTransport>().SetConnectionData("127.0.0.1", (ushort)7777);
        networkManager.gameObject.GetComponent<UnityTransport>().SetConnectionData(address, (ushort)7777);
        networkManager.StartHost();
    }
    [ContextMenu("Client")]
    public void Client()
    {
        string address;
        //player.SetActive(false);
        if (!string.IsNullOrEmpty(tmpClient.text))
        {
            address = tmpClient.text;
        }
        else
        {
           address = defaultIP;
        }
        //networkManager.gameObject.GetComponent<UnityTransport>().SetConnectionData("127.0.0.1", (ushort)7777);
        networkManager.gameObject.GetComponent<UnityTransport>().SetConnectionData(address, (ushort)7777);
        networkManager.StartClient();
    }
}
