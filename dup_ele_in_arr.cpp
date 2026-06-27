#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter size of array: "; // take size of array
    cin >> n;

    int arr[n];                        // declare array
    cout << "Enter  array elements: "; // take array elements

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // store elements in array
    }

    for (int i = 0; i < n; i++) // outer loop selects one element
    {

        // Inner loop selects one element
        //  with remaining elements
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j]) // check duplicate
            {

                // print duplicate element
                cout << "Duplicate found: " << arr[i] << endl;
            }
        }
    }

    return 0;
}

/*----------------------------------------------- Duplicate element in array ----------------------------------------------------
element which appear more than once in a program

Example:-
Array: 1 2 3 4 5 1
output:
Duplicate found: 1

This program demonstrates:-
1. Array-> used to store multiple elements of the same data type
2. Nested Loops-> used to compare one array element with all remaining elements
3. Conditional statements-> used to check whether two elements are equal
4. Array Traversal-> used to visit each element of the array one by one
5. Brute force Technique-> used to find duplicates by checking every possible pair of elements
6. Pairwise Comparison-> used to compare two array elements at a time

Algorithm:-
1.Read the size of the array
2.Input all array elements
3. Traverse the array using an outer loop from index 0 to n-1
4. For each element, traverse the remaining elements using an inner loop from index i+1 to n-1
5. Compare:
     arr[i] == arr[j]
6. If both elements are equal, print the duplicate element
7. Continue until all pairs have been checked


Working flow:-
START
↓
Input array size
↓
Input array elements
↓
Outer loop selects arr[i]
↓
Inner loop starts from i+1
↓
Compare arr[i] and arr[j]
↓
Equal?
↓ YES
Print duplicate element
↓ NO
Continue
↓
Repeat until all elements are checked
↓
END

*/