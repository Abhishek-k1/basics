#include <iostream>
using namespace std;

int main()
{

    int n; // Size of the array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n]; // Sorted array
    cout << "Enter elements of array: ";

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target; // Element to sesrch

    cout << "Enter target array: ";
    cin >> target;

    int low = 0;      // Starting index
    int high = n - 1; // Ending index
    int answer = -1;  // stores first occurence (-1 means not found)

    // Binary search
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Find middle index

        // Target found
        if (arr[mid] == target)
        {

            answer = mid;   // Save current index
            high = mid - 1; // continue searching on the left
        }

        // Target is greater than middle element
        else if (arr[mid] < target)
        {
            low = mid + 1; // Search right half
        }
        // Target is  smaller than middle element
        else
        {
            high = mid - 1; // search left half
        }
    }

    // Print Result
    if (answer != -1)
    {
        cout << "First occurrence is at index: " << answer;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}
