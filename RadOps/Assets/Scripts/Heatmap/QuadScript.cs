using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuadScript : MonoBehaviour
{
  Material mMaterial;
  MeshRenderer mMeshRenderer;

  public float[] mPoints;
  public int mHitCount;

  public float mDelay;


  void Start()
  {
    mDelay = 3;

    mMeshRenderer = GetComponent<MeshRenderer>();
    mMaterial = mMeshRenderer.material;

    mPoints = new float[3 * 320]; //Must match Shader _Hits

  }

  void Update()
  {
   // mDelay -= Time.deltaTime;
    if (mDelay <=0)
    {
      GameObject go = Instantiate(Resources.Load<GameObject>("Projectile"));
      go.transform.position = new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f), Random.Range(-3f, -1f));

      mDelay = 0.5f;
    }

  }

  private void OnCollisionEnter(Collision collision)
  {
    foreach(ContactPoint cp in collision.contacts)
    {
      Debug.Log("Contact with object " + cp.otherCollider.gameObject.name);
            float power;
            if (cp.otherCollider.gameObject.CompareTag("Clean"))
            {
                power = -10f;
                cp.otherCollider.gameObject.GetComponent<RadiationSource>().Contaminate(.1f);                
            }
            else if (cp.otherCollider.gameObject.GetComponent<RadiationSource>() != null)
            {
                power = cp.otherCollider.gameObject.GetComponent<RadiationSource>().activity;             
               
            }
            else { power = 1; }
            Vector3 StartOfRay = cp.point - cp.normal;
      Vector3 RayDir = cp.normal;

      Ray ray = new Ray(StartOfRay, RayDir);
      Debug.DrawRay(StartOfRay, RayDir, Color.red, 10f);
      RaycastHit hit;

      bool hitit = Physics.Raycast(ray, out hit, 10f, LayerMask.GetMask("Target"));

      if (hitit)
      {
        Debug.Log("Hit Object " + hit.collider.gameObject.name);
        Debug.Log("Hit Texture coordinates = " + hit.textureCoord.x + "," + hit.textureCoord.y);
        addHitPoint(hit.textureCoord.x * 20 - 2, hit.textureCoord.y * 20 - 2, power);
      }
      //Destroy(cp.otherCollider.gameObject);
    }
  }

  public void addHitPoint(float xp,float yp, float power)
  {
        
    mPoints[mHitCount * 3] = xp;
    mPoints[mHitCount * 3 + 1] = yp;
    mPoints[mHitCount * 3 + 2] = power;
        

    mHitCount++;
    mHitCount %= 160;

    mMaterial.SetFloatArray("_Hits", mPoints);
    mMaterial.SetInt("_HitCount", mHitCount);

  }

}
