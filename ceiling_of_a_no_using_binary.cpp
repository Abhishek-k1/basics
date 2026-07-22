#include <iostream>
using namespace std;
int main()
{

    int n; // Size of the sorted array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n]; // Sorted array

    cout << "Enter element of array: ";

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target; // Element whose ceiling we want to find

    cout << "Enter target element:  ";
    cin >> target;

    int low = 0;      // Starting index
    int high = n - 1; // Ending index
    int answer = -1;  // Stores the ceiling element (-1 means ceiling not found)

    // Binary Search
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Find middle index

        // Current element can be the ceiling
        if (arr[mid] >= target)
        {
            answer = arr[mid]; // Save current ceiling

            // Search on the left for a smaller valid ceiling
            high = mid - 1;
        }
        else
        {
            // Current element is too small, search right
            low = mid + 1;
        }
    }

    // Print result
    if (answer != -1)
    {
        cout << "Ceiling no is: " << answer;
    }
    else
    {
        cout << "Celing not found ";
    }
    return 0;
}