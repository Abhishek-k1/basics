#include <iostream>
using namespace std;

int main()
{
    int n;  // size of array

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];   // sorted array

    cout << "Elements of array: ";

    //Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;      // Element to search

    cout << "Enter target element: ";
    cin >> target;

    int last = -1;     // Stores first occurence
    int first = -1;    // Stores last occurence
    int count = 0;     // Stores total occurence

    // Find First Occurence
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            first = mid;        // save current index
            high = mid - 1;     // search left side
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;      // search right side
        }

        else
        {
            high = mid - 1;    //Search left side
        }
    }

    // Find Last Occurence
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            last = mid;         // Save current index
            low = mid + 1;     // Search right side
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;     // Search right side
        }
        else
        {
            high = mid - 1;    // Search left side
        }
    }

    // Count Occurences

    if (first == -1)
    {
        count = 0;
    }
    else
    {
        count = last - first + 1;
    }
    cout << "Number of occurrences = " << count << endl;

    return 0;
}