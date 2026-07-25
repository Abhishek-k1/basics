#include<iostream>
using namespace std;

int main ()
{
    int n;        // Size of the array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];   // Sorted array

    cout << "Enter elements of array: ";

    // Input array elements
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;   // Element to search

    cout << "Enter target element: ";
    cin >> target;

    int low = 0;          // Starting index
    int high = n - 1;     // Ending index

    while(low <= high)
    {
        // Calculate middle index
        int mid = low + (high - low) / 2;

        // Target found
        if(arr[mid] == target)
        {
           cout << "Index: " << mid << endl;
           return 0;    // Stop the program
        }

        // Target is greater than middle element
        else if(arr[mid] < target)
        {
            // Search in the right half
            low = mid + 1;
        }

        // Target is smaller than middle element
        else
        {
            // Search in the left half
            high = mid - 1;
        }
    }

    // If target is not found,
    // 'low' points to the correct insertion position
    cout << "Insert Position: " << low << endl;

    return 0;

}