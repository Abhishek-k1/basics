#include <iostream>
using namespace std;

int main()
{
    int n1, n2; // variables to store size of array

    // Take size of first array
    cout << "Enter size of first array: ";
    cin >> n1;

    // Take size of second array
    cout << "Enter size  of second array: ";
    cin >> n2;

    // Create first array
    int arr1[n1];

    // create second array
    int arr2[n2];

    // Take elements of first array
    cout << "Enter element of array 1: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    // Take elements of second array
    cout << "Enter element of array 2: ";

    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
    }

    // pointers for arrays
    int i = 0;
    int j = 0;

    // Merge arrays while both arrays have elements
    while (i < n1 && j < n2)
    {
        // compare elements
        if (arr1[i] < arr2[j])
        {
            // Print smaller element from first array
            cout << arr1[i] << " ";

            // Move first array pointer
            i++;
        }

        else
        {
            // Print smaller element from second array
            cout << arr2[j] << " ";

            // Move second arraypointer
            j++;
        }
    }

    // print remaining elements of first array
    while (i < n1)
    {
        cout << arr1[i] << " ";
        i++;
    }

    // print  remaining elements of second array
    while (j < n2)
    {
        cout << arr2[j] << " ";
        j++;
    }
    return 0;
}