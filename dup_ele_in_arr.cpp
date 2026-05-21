#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter size of array: ";  // take size of array
    cin >> n;

    int arr[n];    // declare array
    cout << "Enter  array elements: ";  // take array elements

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];  // store elements in array
    
    }

    for(int i = 0; i < n; i++)  // outer loop selects one element
    {

    //Inner loop selects one element
    // with remaining elements
    for(int j = i + 1; j < n; j++)
    {
        if(arr[i] == arr[j])   // check duplicate
        {

    // print duplicate element        
            cout << "Duplicate found: " << arr[i];
        }
    }
    }
    
    return 0;
}