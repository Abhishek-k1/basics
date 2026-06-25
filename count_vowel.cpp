#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;       // Variable to store string
    int n, count = 0; // count stores number of vowels

    cout << "Enter string: "; // take string input
    cin >> str;

    

    // loop through every characcter of string
    for (int i = 0; i < str.length(); i++)
    {
        // check whether character is  vowel
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u')

            count++; // Increase vowel count
    }

    // print total vowels
    cout << "Total vowels: " << count;

    return 0;
}


/*
-------------------------------------------------------------- Count vowel in string -----------------------------------------------------------------
vowel are:
a,e,i,o,u

This program demonstrate:-
1.strings
2.Loops
3.Conditional statements
4.logical OR operators(||)
5.Counters
6.string Traversal


Algorithm:-
1.Read the input string
2.Initialize:
     count = 0
3.Traverse the string from index 0 to length-1
4.For each character:
    If character is 
       a,e,i,o,u
5.print the total number of vowels


Working flow:-
START
↓
Input string
↓
count = 0
↓
Traverse string
↓
Character is vowel?
↓ YES
count++
↓ NO
Continue
↓
Repeat for all characters
↓
Print count
↓
END


OR TRUTH TABLE:-
| Condition A | Condition B | A || B |
| ----------- | ----------- | ------ |
| False       | False       | False  |
| False       | True        | True   |
| True        | False       | True   |
| True        | True        | True   |





*/