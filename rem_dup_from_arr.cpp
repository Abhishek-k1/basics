#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout  << "Enter array element: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
     bool duplicate = false;      // assume current element is unnique

    for(int j = 0; j < i; j++) // check previous elements
    {
        // compare current element with previous elements
       if(arr[i] == arr[j])
       {
        duplicate = true;    // duplicate found
       }
    }

    // if element is unique, print it
    if(!duplicate)
    {
    cout << arr[i] <<  " ";
    }
    }
    return 0;
}