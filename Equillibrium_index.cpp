#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array :";
    cin >> n;

    int arr[n];

    cout << "Enter element of array:";

    // Input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool found = false; // tracks whether equilibrium index exists

    // check  each index
    for (int i = 0; i < n; i++)
    {
        int leftsum = 0;
        int rightsum = 0;

        // calculate left sum
        for (int j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }

        // calculate right sum
        for (int j = i + 1; j < n; j++)
        {
            rightsum += arr[j];
        }

        // check equillibrium condition
        if (leftsum == rightsum)
        {
            cout << "Equilibrium Index = " << i << endl;
            found = true;
        }
    }

    // If no equillibrium index found
    if (found == false)
    {
        cout << "No Equillibrium Index Found";
    }
    return 0;
}

/*---------------------------------------------------------- Equillibrium Index ----------------------------------------------------------------------

Equillibrium index is an index where the sumof all elements on the left is equal to the sum of all elements on the right

Examples:-
Array: 1 3 5 2 2
Output:-
Left sum = 1 + 3 = 4
Right sum = 2 + 2 = 4

since left sum = right sum,
Index 2 is the equillibrium index

This program demonstrate:-
1. Arrays-> used to store multiple elements of the same data type
2. Nested Loops-> used to calculate the left sum and right sum of every index
3. Conditional Statements-> used to check whether the left sum is equal to the right sum
4. Array Traversal-> used to visit each element of the array one by one
5. Brute Force Technique-> used to check every index by calculating its left and right sums without using any optimization
6. Accumulation-> used to calculate the total sum of the left side and right side elements
7. Boolean Variable-> used to track whether an equillibrium index is found

Algorithm:-
1. Read the size of the array
2. Input all array elements.
3. Initialize a boolean variable found = false
4. Traverse the array from index 0 to n-1
5. For each index:
    initialize leftsum = 0 and rightsum = 0
    calculate the sum of all elements before the current index
    calculate the sum of all elements after the current index
6. Compare the left sum and the right sum
7. If both sums are equal
    print the equillibrium index
    set found = true
8. Repeat for all indices
9. If no equillibrium index is found, print "No equillibrium index found."

Working flow:-
START
↓
Input array size
↓
Input array elements
↓
Select current index
↓
Calculate left sum
↓
Calculate right sum
↓
left sum == right sum ?
↓ YES
Print equilibrium index
↓ NO
Check next index
↓
Repeat for all indices
↓
No equilibrium index found?
↓ YES
Print "No Equilibrium Index Found"
↓
END




*/