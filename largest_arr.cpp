#include <iostream>
using namespace std;

int main()
{
    int n;                           // store size of array
    cout << "Enter size of array: "; // take array size from user
    cin >> n;

    int arr[n]; // create array of size n

    cout << "Enter array elements: "; // take array elements

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0]; // assume first element is largest

    for (int i = 1; i < n; i++) // compare remaining elements
    {
        if (arr[i] > largest) // check current element is biggest or not
        {
            largest = arr[i]; // update largest value
        }
    }
    cout << "Largest element is: " << largest; // print final largest  element

    return 0;
}