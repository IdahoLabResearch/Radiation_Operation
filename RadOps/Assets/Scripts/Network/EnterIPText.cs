using System.Linq;
using TMPro;
using UnityEngine;

public class EnterIPText : MonoBehaviour
{
    public TextMeshPro TMP;
    public string address;

    // Update is called once per frame
    void Update()
    {
        TMP.text = address;
    }

    public void UpdateIP(string num)
    {
        address += num;
    }

    public void Del()
    {
        address = address.Substring(0, address.Length - 1);
    }
}
