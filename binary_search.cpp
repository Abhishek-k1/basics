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


/*----------------------------------------------- Binary search ----------------------------------------------------------

Binary search repeatedly divides the search space into two halves until the target element found or the search space become empty

Binary search works only on a sorted array
Example:-
Array: 1 4 5 7 9
Target: 5
output:-
Element found at index: 2

This program demonstrates:-
1. Array
2. Loops
3. Conditional Statements
4. Boolean Variable
5. Searching Algorithms
6. Divide and conquer Technique

Algorithm:-
1. Read the size of the array
2. Input the sorted array elements
3. Input the target element
4. Initialize
    low = 0;
    high = n - 1;
5. While low <= high
Find middle index:
   mid = (low + high) / 2;
If arr[mid] == target, element is found
If arr[mid] < target, search the right half
   low = mid + 1;
otherwise search the left half
   high = mid - 1;
6. If the loop ends and element is not found, print"Element not found".


Working flow:-
START
↓
Input sorted array
↓
Input target element
↓
low = 0
high = n - 1
↓
low <= high ?
↓ NO
Element not found
↓ YES
Find mid
↓
arr[mid] == target ?
↓ YES
Element found
↓ NO
arr[mid] < target ?
↓ YES
low = mid + 1
↓ NO
high = mid - 1
↓
Repeat
↓
END

Time complexity:- O(log n)
Space complexity:-O(1)

*/