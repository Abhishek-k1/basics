#include <iostream>
using namespace std;

int main () {
   
    int n;     // size of array
    int k;     // window size

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];    //array of size  n

    cout << "Enter elements off array: ";
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];   // input array elements
    }
     
    cout << "Enter value of k: ";
    cin >> k;

    // print all windows
    for(int i = 0; i <= n - k; i++)
    {
        // print current window
        for(int j = i; j < i+ k; j++)
    {
    cout << arr[j] << " ";
    }
    cout << endl;
    }

    // find first negative number in every window
    for(int i = 0; i <= n-k; i++)
    {
          bool found =  false;  // assume no negative number found
    
    // check current window
    for(int j = i; j < i + k; j++)
    {
        // if negative number found
        if(arr[j] < 0)
        {
          cout << arr[j] << " ";   // print first negative
          found = true;            // mark as found
          break;                  // stoip check current window
        }
    }

     //if no negative number exists in current found
        if(!found)
        {
            cout <<" 0 :";   
        }
    }
    return 0;
    }

/*------------------------------------------------------ First negative number in a window ----------------------------------------------------
Given an array and a window size k, find the first negative number in every contiguous subarray (window) of size k

If a window does not contain any negative number then print 0

Input:
Array: 2 -3 4 -1 6 -7 5
k = 3

Output:
-3 -3 -1 -1 -7

Explanation:

Window 1:  2  -3   4   → First Negative = -3
Window 2: -3   4  -1   → First Negative = -3
Window 3:  4  -1   6   → First Negative = -1
Window 4: -1   6  -7   → First Negative = -1
Window 5:  6  -7   5   → First Negative = -7


This program demonstrate:-
1.Arrays
2.Nested Loops
3.Conditional Statements
4.Array Traversal
5.Sliding Window Technique
6.Boolean Variable
7.Break statements

Algorithm:-

1. Read the size of the array
2. Input all array elements
3. Read the window size(k)
4, Traverse every window from index 0 to n-k
5. For each window:
      set found = false
      Traverse all element in the current window
      If a negative element is found
            print the element
            set found = true
            Break the loop
6. If no negative element is found, print "0";
7. Repeat until all windows are processed


Working Flow:-
START
↓
Input array size
↓
Input array elements
↓
Input window size (k)
↓
Select current window
↓
Check each element in the window
↓
Negative element found?
↓ YES
Print first negative number
↓ NO
Print " 0  :"
↓
Move to next window
↓
Repeat until all windows are processed
↓
END








*/