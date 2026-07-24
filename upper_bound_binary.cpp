#include <iostream>
using namespace std;

int main () {

    int n;     // Size of the sorted array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];    // Sorted array

    cout << "Enter elements of array: ";

    // Input array elements
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;   // Element whose upper bound we want to fin

    cout << "Enter target element: ";
    cin >> target;

    int low = 0;          // Starting index
    int high = n - 1;     // Ending index
    int answer = -1;      // Stores the index of the upper bound

    // Binary Search
    while(low <= high)
    {
        int mid = low + (high - low) / 2;    // Find middle index

        // Current element can be the upper bound
        if(arr[mid] > target)
        {
            answer = mid;      // Save current index

            // Search on the left for an earlier valid index
            high = mid - 1;
        }
        else
        {
             // Current element is less than or equal to target
            // Search on the right

            low = mid + 1;
        }
    }

    // Print result
    if(answer != -1)
    {
        cout << "Upper Bound value: " << arr[answer] << endl;
        cout << "Upper Bound Index: " << answer << endl;
    }
    else
    {
        cout << "Upper Bound not found";
    }
    return 0;
}
    
