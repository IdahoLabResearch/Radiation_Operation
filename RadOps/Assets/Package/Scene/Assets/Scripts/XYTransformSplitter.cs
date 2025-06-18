using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;


public class XYTransformSplitter : NetworkBehaviour
{
  
    [SerializeField]
    private GameObject XComp;
    [SerializeField]
    private GameObject YComp;
    [SerializeField]
    private GameObject ZComp;
    private float XOffset;
    private float YOffset;
    private float ZOffset;
    public bool update = false;
    public Transform parentRef;
    public bool stickTo;
    public NetworkVariable<bool> netUp = new Unity.Netcode.NetworkVariable<bool>(false, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
    //public float someNumber;

    // Start is called before the first frame update
    void Start()
    {
        //This allows one object to drive up to 3 other objects in an in rails locomotion system
        if (XComp != null)
        {
            XOffset = this.transform.position.x - XComp.transform.position.x;
        }
        if (YComp != null)
        {
            YOffset = this.transform.position.y - YComp.transform.position.y;
        }
        if (ZComp != null)
        {
            ZOffset = this.transform.position.z - ZComp.transform.position.z;
            //Debug.Log(this.gameObject.name+ " " + ZOffset);
        }
        
    }

    public void StopUpdate() 
    { 
        update = false; 
        UpSetServerRpc(false);
    }
    public void StartUpdate() 
    {
        update = true;
        UpSetServerRpc(true);
    }

    [ServerRpc(RequireOwnership = false)]
    public void UpSetServerRpc(bool value)
    {
        netUp.Value = value;
    }
    [ServerRpc(RequireOwnership = false)]   
    public void TranslateServerRpc(Vector3 netPos)
    {
        XComp.transform.localPosition = netPos;
    }


    // Update is called once per frame
    void Update()
    {
        Vector3 outVector =  new(parentRef.transform.InverseTransformPoint(this.transform.position).x, parentRef.transform.InverseTransformPoint(this.transform.position).y, parentRef.transform.InverseTransformPoint(this.transform.position).z);
        if (netUp.Value | update)
        {
            Debug.Log("Move with Handle");
            if (XComp == null)
            {
                //XComp.transform.localPosition = new Vector3(outVector.x, 0f, 0f);
                outVector.x = 0; outVector.y = 0;
            }
            if (YComp == null)
            {
                //YComp.transform.localPosition = new Vector3(0f, outVector.y , 0f);
                outVector.y = 0;
            }
            if (ZComp == null) 
            {
                ZComp.transform.localPosition = new Vector3(0f, 0f, outVector.z );
                outVector.z = 0;
            }

            XComp.transform.localPosition = outVector;
            TranslateServerRpc(outVector);
        }
        else if (update == false && stickTo == true)
        {
            if (XComp != null)
            {
                this.transform.position = XComp.transform.position;
            }
            if (YComp != null)
            {
                this.transform.position = YComp.transform.position;
            }
            if (ZComp != null)
            {
                this.transform.position = ZComp.transform.position;
            }
        }
    }
}
