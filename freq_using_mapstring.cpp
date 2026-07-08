#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // map to store char frequency
    // key = character
    // value = count
    map<char, int> freq;

    string str;

    // take complete sentence input
    cout << "Enter string: ";
    getline(cin, str);

    // traverse string character by character
    for(int i = 0; i < str.length(); i++)
    {

        // ignore spaces
        if(str[i] != ' ')
        freq[str[i]]++;    // increase frequency of character
    }

    // traverse map and print frequencies
     for(auto it =  freq.begin(); it != freq.end(); it++)
        
        {
        cout << it->first << " = " << it->second << endl;
     }
    
     return 0;

}

/*---------------------------------------------------- Count frequency of characters using map -------------------------------------------------
The frequency of a character is the number of timess it appears in a string

spaces are ignored while counting the frequency

Example:

Input:
apple pie

Output:
a = 1
e = 2
i = 1
l = 1
p = 3

This program demonstrates;-
1.string-> used to store the input string
2.STL Map-> used to store each character and its frequency
3.Loops-> used to traverse the string and the map
4.Conditional Statements-> used to ignore space while counting
5.Frequency Counting-> used to count how many times each character appears
6.Key value paie-> used to store the character as the key and its frequency as the value
7.Map Traversal-> used to visit every character-frequency pair stored in the map
8.Iterator-> used to access each element of the map using begin() and end()

Algorithm:-
1.Read the input string
2.Create a map to store character frequencies
3.Traverse the string character by character
4.If the current character is not a space
        Increase its frequency in the map
5.Traverse the map
6.Print each character and its frequency



Working Flow:-

START
↓
Input string
↓
Traverse each character
↓
Character is a space?
↓ YES
Ignore it
↓ NO
Increase frequency in map
↓
Repeat for all characters
↓
Traverse the map
↓
Print character and frequency
↓
END



*/