using UnityEngine;
using System.Collections.Generic;
using System.IO;

public class CSVReader : MonoBehaviour
{
    public string fileName = "data.csv";

    private Dictionary<string, string[]> dataDictionary;

    void Start()
    {
        string filePath = Path.Combine(Application.streamingAssetsPath, fileName);
        if (File.Exists(filePath))
        {
            dataDictionary = new Dictionary<string, string[]>();

            string[] allLines = File.ReadAllLines(filePath);
            if (allLines.Length > 0)
            {
                // Assuming the first line is a header
                string[] headers = allLines[0].Split(',');

                // Start reading from the second line
                for (int i = 1; i < allLines.Length; i++)
                {
                    string[] entries = allLines[i].Split(',');
                    if (entries.Length > 0)
                    {
                        string key = entries[0]; // Assuming the first column is the key
                        dataDictionary[key] = entries;
                    }
                }

                // Example of finding Alice's job
                //string job = GetJobByName("Alice");
                //Debug.Log("Alice's Job: " + job);
                Debug.Log("Data located");
            }
            else
            {
                Debug.LogError("CSV file is empty.");
            }
        }
        else
        {
            Debug.LogError("File not found: " + filePath);
        }
    }

    string GetJobByName(string name)
    {
        if (dataDictionary != null && dataDictionary.TryGetValue(name, out string[] entries))
        {
            if (entries.Length > 2)
            {
                return entries[2]; // Assuming job is in the third column
            }
            else
            {
                Debug.LogError("Not enough columns in the CSV data.");
                return null;
            }
        }
        else
        {
            Debug.LogError("Name not found in the dictionary.");
            return null;
        }
    }

    public float GetShieldValue(string isotope, string shield)
    {
        int shieldCol = 1;
        if(shield == "Concrete")
        {
            shieldCol = 1;
        }
        else if(shield == "Steel")
        {
            shieldCol = 2;
        }
        else if (shield == "Lead")
        {
            shieldCol = 3;
        }
            float absorption;
        if (dataDictionary != null && dataDictionary.TryGetValue(isotope, out string[] entries))
            if (entries.Length > 2)
            {
                string f = entries[shieldCol]; // Assuming job is in the third column
                absorption = float.Parse(f);
               // Debug.Log("Shield value for" + shield +" is " + absorption);
            }
            else
            {
                Debug.LogError("Not enough columns in the CSV data.");
                return .5f;
            }
    
        else
        {
            Debug.LogError("Name not found in the dictionary.");
            return .5f;
        }
        return absorption;

    }
}