using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode.Components;

public class NetworkClientTransform : NetworkTransform
{
   protected override bool OnIsServerAuthoritative()
    {
        return false;
    }
}
