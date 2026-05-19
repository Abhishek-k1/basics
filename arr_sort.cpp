#include <iostream>
using namespace std;

int main() {

    int n; 
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    bool sorted = true;      // Assume array is sorted
    cout << "Enter array elements: ";

    
    for(int i = 0; i < n; i++)   // input array
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++)   // compare adjacent elements
    {
    if(arr[i] > arr[i+1])    // check if order breaks
    {
    sorted = false;
    }
}

if(sorted == true)         // print result
{
    cout << "Array is sorted";
}
else
{
    cout << "Array is not sorted";
}
     return 0;
}