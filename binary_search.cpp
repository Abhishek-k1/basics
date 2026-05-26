#include <iostream>
using namespace std;

int main() {

    int n;

    // variables for binary search
    int low, high, mid;  

    // Variabble to store target element
    int target;

    // variable to check element found or not
    bool found = false;

    // Take size of array
    cout << "Enter  size of array: ";
    cin >> n;


    int arr[n];

    // Take sorted array elements
    cout << "Enter sorted array elements: ";
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Take target element
    cout << "Enter element to search: ";
    cin >> target;

    // Initialize low or high
    low = 0;
    high = n - 1;

    // Binary search loop
    while(low <= high)
    {

    // finnd middle index
    mid = (low + high) / 2;
    
    // check if target found
    if(arr[mid] == target)
    {
        cout << "Element found at index: " << mid;
       
        found = true;
        break;
    }

    // search right side
    else if(arr[mid] < target)
    {
    low = mid + 1;
    }
    else
    {

    // search left side
    high = mid - 1;
    }
   }

   // if element not found
   if(found == false)
   {
      cout  << "Element not found";
   }
   return 0;
}