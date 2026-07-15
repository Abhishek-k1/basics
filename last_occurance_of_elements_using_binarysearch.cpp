#include <iostream>
using namespace std;

int main()
{

    int n; // size of the  array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n]; // sorted array

    cout << "Enter elements of array: ";

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target; // Element to search

    cout << "Enter Target array: ";
    cin >> target;

    int low = 0;      // Starting index
    int high = n - 1; // Ending index
    int answer = -1;  // stores last occurance (-1 means not found)

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Find middle index

        if (arr[mid] == target)
        {
            answer = mid;  // save current index
            low = mid + 1; // continue searching on the right
        }

        // Target is greater than middle element
        else if (arr[mid] < target)
        {
            low = mid + 1; // search right half
        }

        // Target is smaller than middle element
        else
        {
            high = mid - 1; // search left half
        }
    }

    // print result
    if (answer != -1)
    {
        cout << "last occurance is at index: " << answer;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}