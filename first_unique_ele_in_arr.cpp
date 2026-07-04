#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, int> freq; // stores frequency of each element

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    bool found = false; // to check unique element exits

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1) // unique elements
        {
            cout << "First non repeating element: " << arr[i];
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Non unique element found";
    }
    return 0;
}

/*------------------------------------------------------ First unique element in an array -----------------------------------------------------
A non-repeating element is an element that appears exactly once in an array

Example:

Input:
Array: 1 4 5 7 1 3 4

Output:
First non repeating element: 5


This program demonstrates:-
1. Arrays:- used to stpree the input elements
2. STL Map:- used to store the frequency of each element
3. Loops:- used to traverse the array and count element frequencies
4. Conditional Statements:- usedto check whether an element appears only once
5. Frequency counting:- used to count how many times each element occurs
6. Array Traversal:- used to visit every element of the array
7. Boolean Variable:- used to track whether a non repeating elementis found

Algorithm:-
1. Read the size of the array
2. Input all array elements
3. Store the frequency of each element using a map
4. Initialize found = false
5. Traverse the array again
6. If the frequency of the current element is 1:
         print the first non-repeating element
         set found = true.
         Break the loop.
7. If no element has frequency 1, print
        "No non-repeating element found."

Working flow

START
↓
Input array size
↓
Input array elements
↓
Count frequency of every element
↓
Traverse the array again
↓
Frequency == 1 ?
↓ YES
Print first non-repeating element
↓ NO
Check next element
↓
End of array?
↓ YES
Print "No non-repeating element found"
↓
END



*/