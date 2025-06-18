using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class DoseValueReaderToUI : MonoBehaviour
{
    public GameObject targetText;
    public GameObject SourceText;
    public string sourceString;
    private string readString;

   
    private void Update()
    {
        if (SourceText != null)
        {
            string result = GetStringFromComponent(SourceText, "Dosimeter", sourceString);
            readString = result;
            targetText.GetComponent<TMP_Text>().text = readString;
            targetText.GetComponent<TMP_Text>().color = SourceText.GetComponent<Dosimeter>().textColor;
        }
    }

    public string GetStringFromComponent(GameObject targetObject, string componentName, string variableName)
    {
        // Find the component on the target object
        var component = targetObject.GetComponent(componentName);

        // If the component is found
        if (component != null)
        {
            // Use reflection to get the value of the variable
            var fieldInfo = component.GetType().GetField(variableName);

            // If the field exists
            if (fieldInfo != null)
            {
                // Retrieve and return the value
                var value = fieldInfo.GetValue(component);
                return value as string;
            }
            else
            {
                return "Variable not found.";
            }
        }
        else
        {
            return "Component not found.";
        }
    }

}
