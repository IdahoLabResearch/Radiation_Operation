using MixedReality.Toolkit;
using MixedReality.Toolkit.Subsystems;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class PortableDosimeterTracker : NetworkBehaviour
{
    public string TargetTransform;
    public bool left;
    private Transform parentTransform;
    private Transform netWorkParent;
    private bool relevant;

    // Start is called before the first frame update

    void Start()
    {
        // base.OnNetworkSpawn();
        // this.GetComponent<NetworkObject>().Spawn();
        if (this.transform.root.gameObject.name == "NetworkMRTK(Clone)") 
        {
            this.gameObject.SetActive(false);
        }
        StartCoroutine(Wait(0.02f));
        foreach (GameObject g in GameObject.FindGameObjectsWithTag("Dosimeter"))
            {
                

            }
            parentTransform = this.transform.root.Find(TargetTransform).transform;
        
        IEnumerator Wait(float seconds)
        {
            yield return new WaitForSeconds(seconds);


        }
    }
        // Update is called once per frame
        void Update()
        {
            //if (relevant)
            {
                if (left)
                {
                    var aggregator = XRSubsystemHelpers.GetFirstRunningSubsystem<HandsAggregatorSubsystem>();
                    bool wristValid = aggregator.TryGetJoint(TrackedHandJoint.Wrist, UnityEngine.XR.XRNode.LeftHand, out HandJointPose leftWrist);
                    if (leftWrist != null && wristValid)
                    {
                        this.transform.position = leftWrist.Position;
                    }
                    else
                    {
                        this.transform.localPosition = new Vector3(0f, 0f, 0f);
                    }
                }
                else
                {
                    var aggregator = XRSubsystemHelpers.GetFirstRunningSubsystem<HandsAggregatorSubsystem>();
                    bool wristValid = aggregator.TryGetJoint(TrackedHandJoint.Wrist, UnityEngine.XR.XRNode.RightHand, out HandJointPose rightWrist);
                    if (rightWrist != null && wristValid)
                    {
                        this.transform.position = rightWrist.Position;
                    }
                    else
                    {
                        this.transform.localPosition = new Vector3(0f, 0f, 0f);
                    }
                }
            }
        }
    }

