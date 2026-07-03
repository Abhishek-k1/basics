#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    // map to store frequency of character
    map<char, int> freq;

    string str;

    // take input string
    cout << "Enter string: ";
    getline(cin, str);

    // count frequency of each character
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    bool found = false;

    // find first non-repeating character
    for (int i = 0; i < str.length(); i++)
    {
        if (freq[str[i]] == 1)
        {
            cout << "First non-repeating character: " << str[i];
            found = true;
            break;
        }
    }

    // if no non-repeating character  exists
    if (!found)
    {
        cout << "No non-repeating character found";
    }
    return 0;
}

/*----------------------------------------------------- First non-repeating character -----------------------------------------------------
A non repeating character is a character that appears exactly once in a string

Example:-

Input:
asdfa

Output:
First non repeating character: s

This program demonstrate:-
1. strings-> used to store the input string
2. STL map-> used to store the frequency of each character
3. Loops-> used to traverse the string and count character frequencies
4. Conditional Statements-> used to check whether a charcters appears only once
5. Frequency Counting-> used to count how many times each character occurs
6. String Traversal-> used to visit every character of the string
7. Boolean Variable-> used to track whether a non-repeating character is found


Algorithm:-
1. Read the input string
2. Create a map to store character frequencies
3. Traverse the string and increase the frequency of each character
4. Initialize found = false
5. Traverse the string again
6. If the frequency of the current character is 1:
        print the character
        set found = true
        Break the loop
7. If no character has frequency 1, print
     "No non-repeating character found"

Working flow;-
START
↓
Input string
↓
Count frequency of every character
↓
Traverse string again
↓
Frequency == 1 ?
↓ YES
Print first non-repeating character
↓ NO
Check next character
↓
End of string?
↓ YES
Print "No non-repeating character found"
↓
END




*/