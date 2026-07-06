#include <iostream>
using namespace std;

int main()
{
    int n, count;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // store elements in array
    }

    // outer loop selects one element
    for (int i = 0; i < n; i++)
    {
        count = 0;

        // Inner loop compares selected element with all elements
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j]) // check if element are same
            {
                count++; // Increase frequency count
            }
        }

        // print frequency of current element
        cout << arr[i] << " appears " << count << " times" << endl;
    }
    return 0;
}


/*------------------------------------------------------- count Frequency of each element in an array ----------------------------------------------
The frequency of an element is the number of times it appears in an array

Example:

Input:
Array: 2 4 2 5 4

Output:
2 appears 2 times
4 appears 2 times
2 appears 2 times
5 appears 1 times
4 appears 2 times

This program demonstrates:-

1.Arrays-> Used to store the input elements
2.Nested Loops-> used to compare each element with every other element
3.Conditional Statements-> used to check whether two elements are equal
4.Array Traversal-> used to visit every element of the array
5.Frequency Counting-> Used to count how many times each element appears
6.Brute Force Technique-> used to calculate the frequency by comparing every possible pair of elements

Algorithm:-
1.Read the size of the array
2.Input all array elements
3.Traverse the array using an outer loop
4.Initialize count =0;
5.Traverse the array again using an inner loop
6.Compare the selected element with every element
7.If both element are equal, increment count
8.Print the element and its frequency
9.Repeat for all elements

Working flow:-
START
↓
Input array size
↓
Input array elements
↓
Select one element
↓
Set count = 0
↓
Compare with every element
↓
Elements equal?
↓ YES
Increment count
↓
Print element and frequency
↓
Repeat for all elements
↓
END

*/