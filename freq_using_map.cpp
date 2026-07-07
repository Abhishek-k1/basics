#include <iostream>
#include <map>

using namespace std;

int main()
{

    // Map to  store element and frequency
    map<int, int> mp;

    int n;

    // Take size of array
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    // Take array  elements
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        // Increase frequency of current element
        mp[arr[i]]++;
    }

    // print frequencies
    cout << "Element Frequency: " << endl;

    for (auto x : mp)
    {
        // x.first -> element
        // x.second -> frequency

        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

/*------------------------------------------------------------- Count frequency of element using map -----------------------------------------------

The frequency of an element is the number of times it appears in an array

Example:

Input:
Array: 2 4 2 5 4

Output:
Element Frequency:
2 -> 2
4 -> 2
5 -> 1

This program demonstrates:-

1.Arrays-> used to store the input elements
2.STL Map-> used to store each element and its frequency
3.Loops-> used to read elements and traverse the map
4.Frequency Counting-> used to count how many times each element appears
5.Key-Value pair-> used to store the element as the key and its frequency as the value
6.Auto keyword-> used to automatically access each key-value pair while traversing the map
7.Map traversal-> used to visit every element-frequency pair stored in the map

ALgorithm:-
1.Read the size of the array
2.Input all array elements
3.For each element:
       Increase its frequency in the map
4.Traverse the map
5.Print each element and its frequency


Working Flow:-

START
↓
Input array size
↓
Input array elements
↓
Store element frequency in map
↓
Traverse the map
↓
Print element and frequency
↓
END



*/