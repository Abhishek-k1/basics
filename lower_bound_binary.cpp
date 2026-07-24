#include<iostream>
using namespace std;

int main() 
{
    int n;     // Size of sorted array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];   // Sorted array

    cout  << "Enter element of array: ";

     // Input array elements
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;  // Element whose lower bound we want to find

    cout << "Enter target element: ";
    cin >> target;

    int low = 0;          // Starting index
    int high = n - 1;      // Ending index
    int answer = -1;        // Stores the index of the lower bound

    // Binary Search
    while(low <= high)
    {
        int mid = low + (high - low) / 2;    // Find middle index

        // Current element can be the lower bound
        if(arr[mid] >= target)
        {
            answer = mid;     // Save current index
            
           // Search on the left for an earlier valid index
            high = mid - 1;
        }
        else
        {
            // Current element is too small, search right
            low = mid + 1;
        }
    }
    
    // Print result
    if(answer != -1)
    {
        cout << "Lower Bound value: " << arr[answer] << endl;
        cout << "Lower Bound Index: " << answer << endl;
    }
    else
    {
        cout << "Lower Bound not found";
    }
    return 0;
}