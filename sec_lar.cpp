#include <iostream>
using namespace std;

int main()
{

    int n, largest, second;    // variable declaration

    cout << "Enter size of array: ";   // take size  of array
    cin >> n;

    int arr[n];           // create array
    cout << "Enter array element: ";    // take array elements

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    largest = arr[0];          // assume first element is largest

    second = -1;              // Initially second largest is very small

    for (int i = 0; i < n; i++)  // loop for comparison
    {
        if (arr[i] > largest)   // check  if current element is bigger than largest
        {
            second = largest; // old largest becomes second largest

            largest = arr[i];   // update largest
        }
        else if (arr[i] > second && arr[i] != largest)  // check  for second largest
        {
            second = arr[i];   // update second largest
        }
    }
    cout << "second largest element is: " << second;  // print second largest  element

    return 0;
}
