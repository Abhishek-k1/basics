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

/*--------------------------------------------- Array sorted ----------------------------------------------------------

An array is said to be sorted if every element is less than or equal to the next element
Example:
1 2 3 4 5 = array is sorted
1 4 2 5 3 = array is not sorted
This program demonstrates:
1.Arrays
2.Loops
3.Conditional statements
4.Boolean variable
5.Array Traversal


Algorithm:-
1. Read the size of the array
2. Input all array elements
3. Assume the array is sorted by setting
4. Traverse the array from index 0 to n-2
5. Compare arr[i]  with arr[i+1]
6. if arr[i] > arr[i+1], set:
       sorted = false;
7. After the loop
     if sorted == true, print array is sorted
     otherwise print array is not sorted


Working flow:-

    START
    ↓
    Input n
    ↓
    Input array elements
    ↓
    Assume sorted = true
    ↓
    Compare arr[i] with arr[i+1]
    ↓
    arr[i] > arr[i+1] ?
    ↓ YES
    sorted = false
    ↓
    Continue checking
    ↓
    Loop ends
    ↓
    sorted == true ?
    ↓ YES → Array is sorted
    ↓ NO → Array is not sorted
    ↓
    END


Time Complexity:-
input loop = o(n)
checking Loop = o(n)
overall Time complexity= o(n)
space complexity = o(1) 


logic:-
 Compare every element with its next element.
 If any element is greater than the next element
 the array is not sorted
*/