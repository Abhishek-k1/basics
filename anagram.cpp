#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    map<char,int> freq;

    string str1;
    string str2;

    // take first string
    cout << "Enter string1: ";  
    getline(cin, str1);

    // take second string
    cout << "Enter string2: ";
    getline(cin, str2);

    // if length  are different are different can not be anagrams
    if(str1.length() != str2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    // increase frequency using first string
    for(int i = 0; i < str1.length(); i++)
    {
        freq[str1[i]]++;
    }

    // decrease frequency using second string
    for(int j = 0; j < str2.length(); j++)
    {
        freq[str2[j]]--;
    }

    // check all frequencies
    for(auto it = freq.begin();  it != freq.end(); it++)
    {
        if(it->second != 0)
        {
            cout << "Not Anagram";
            return 0;
        }
    }

    // all frequencies are zero
    cout << "Valid Anagram";

    return 0;
}


/*
-------------------------------------------------------------- Anagram Program ----------------------------------------------------------

Two string are called anagrams if they contain the same characters with the same frequency with any order
Example: 
keyword -> ordwyke (valid)
hello -> world (not valid)  
programming -> mproinggram

This program demonstrate 
1.string handling:- used to store input strings
2.STL map:- used to store char freq
3.frequency counting-
4.loops:- traversing strings, updating map, checking results
5.conditional statements:- length check, final validation
6.iterations:- used to traverse map


Algorithm:

1. Read two strings.
2. Compare lengths.
3. If lengths are different, return "Not Anagram".
4. Increase frequency of each character in first string.
5. Decrease freqquency of each character in second string.
6. Traverse map and check freqiencies.
7. If all frequencies are zero -> valid anagram.
8. Otherwise -> not anagram


Working Flow:

START
  ↓
Input str1, str2
  ↓
Check length equal?
  ↓ NO → Not Anagram → END
  ↓ YES
Count frequency of str1 (+1)
  ↓
Subtract frequency of str2 (-1)
  ↓
Check map values
  ↓
All zero? → Valid Anagram
Else → Not Anagram
  ↓
END


*/