#include <iostream>
using namespace std;

int main()
{
    int n; // Size of the array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n]; // Sorted array

    cout << "Enter element of array: ";

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target; // Element whose floor we want to find

    cout << "Enter target element: ";
    cin >> target;

    int low = 0;      // Starting index
    int high = n - 1; // Ending index
    int answer = -1;  // Stores the floor element (-1 means floor not found)

    // Binary Search
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Find middle index

        // Current element can be the floor
        if (arr[mid] <= target)
        {
            answer = arr[mid]; // Save current floor

            low = mid + 1; // Search on the right for a larger valid floor
        }
        else
        {
            // Current element is too large, search left
            high = mid - 1;
        }
    }

    // Print result
    if (answer != -1)
    {
        cout << "floor is: " << answer;
    }
    else
    {
        cout << "floor not found: ";
    }
    return 0;
}