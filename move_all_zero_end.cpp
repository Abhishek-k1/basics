#include <iostream>
using namespace std;

int main()
{

    int n;
    int j = 0; // variable to track position of non-zero elements

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) // Traverse array
    {

        // check non-zero element
        if (arr[i] != 0)
        {

            // swap current non -zero element
            // with position j
            swap(arr[i], arr[j]);

            // Move j to next position
            j++;
        }
    }

    // print final array
    cout << "Array after moving zeroes to end: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}