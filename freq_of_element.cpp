#include <iostream>
using namespace std;

int main()
{
    int n, count;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // store elements in array
    }

    // outer loop selects one element
    for (int i = 0; i < n; i++)
    {
        count = 0;

        // Inner loop compares selected element with all elements
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j]) // check if element are same
            {
                count++; // Increase frequency count
            }
        }

        // print frequency of current element
        cout << arr[i] << " appears " << count << " times" << endl;
    }
    return 0;
}