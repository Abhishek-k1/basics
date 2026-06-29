#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int expected;
    int missing;

    // take value of n
    cout << "Enter size of array: ";
    cin >> n;

    // array size is n-1 because one number is missing
    int arr[n - 1];
    
    // take array element
    cout << "Enter element of array: ";

    for(int i = 0; i < n - 1; i++)
    {
       cin >> arr[i];   // store array element

    // calculate actual sum
       sum += arr[i];
    }
    
    // calculate expected sum from 1 to n
     expected = n * (n + 1) / 2;

    // find missing number
     missing = expected - sum;
    
    cout << "Missing number is: " << missing;

    return 0;
}
/*------------------------------------------------------------- MIssing nnumber -----------------------------------------------
A missing number is a number that is absent from sequence 1 to n
Example:-
Input:
n = 5
Array: 1 2 4 5
Output:
Missing Number = 3

This program demonstrate:-
1. Array
2. Loops
3. Arithmetic operators
4. Mathematical Formula
5. Accumulation
6. Optimization Technique

Algorithm:-
1. Read the value of n
2. Create an array of size n-1
3. Input all array elements
4. Calculate the actual sum of the array elements
5. Calculate the ecpected sum of numbers  from 1 to n using:
         expected = n * (n  + 1) / 2
6. Find the  missing number:
        missing = expected - sum
7. Print the missing number


Working flow:-
START
↓
Input n
↓
Input array elements
↓
Calculate actual sum
↓
Calculate expected sum
↓
missing = expected - actual sum
↓
Print missing number
↓
END




*/