#include <iostream>
using namespace std;

int main()
{
    
    // variables for sizes of arrays
    int n1, n2;

    // Take size of first array
    cout << "Enter size of first array: ";
    cin >> n1;

    // Take size of second array
    cout << "Enter size of second array: ";
    cin >> n2;

    // declare two arrays
    int arr1[n1];
    int arr2[n2];

    // Input elements of first array
    cout << "Enter elements of array 1: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    //  Input elements of second array
    cout << "Enter elements of array 2: ";
    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
    }

    //print heaading
    cout << "Intersection elements are: ";

    // outer loop[p to traverse first array
    for (int i = 0; i < n1; i++)
    {
        // Inner loop to traverse second array
        for (int j = 0; j < n2; j++)
        {
            // compare elements of both arrays
            if (arr1[i] == arr2[j])
            {
                // print commmon element
                cout << arr1[i] << " ";

                break;
            }
        }
    }

    return 0;
}

/*-------------------------------------------- Intersection of two arrays --------------------------------------------------------------------------

The intersection of two arrays consists of the element that are present in both arrays

Example:

Input:

Array 1: 1 2 3 4 5
Array 2: 3 4 5 6 7

Output:

Intersection elements are:
3 4 5

This program demonstrates:-
1.Arrays
2.Nested loops
3.Conditional statements
4.Array Traversal
5.Brute Force Technique
6.Pairwise Comparison
7.Break Statements

ALgorithm:-
1.Read the size of the first array
2.Read the size of the second array
3.Input all elements of both arrays
4.Traverse the first array using an outer loop
5.For each element of the first array, Traverse the second array using an inner loop
6.Compare the current elements of both arrays
7.If both elements are equa:
        print the common element.
        Break the inner loop.
8.Repeat until all elements of the first array have been checked


Working Flow:-

START
↓
Input size of first array
↓
Input size of second array
↓
Input elements of both arrays
↓
Select one element from first array
↓
Compare with every element of second array
↓
Elements equal?
↓ YES
Print common element
↓
Break inner loop
↓ NO
Continue comparison
↓
Repeat for all elements
↓
END

*/