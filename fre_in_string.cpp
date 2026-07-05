#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    int count = 0;

    cout << "Enter string: ";
    cin >> str;

    // outer loop selects one character
    for(int i = 0; i < str.length(); i++)
    {
     count = 0; // reset count for new character

     // Inner loop compares selected character
     // with all characcters
     for(int j = 0; j < str.length(); j++)
     {
        if(str[i] == str[j])  // check matching characters
     {
        count++; // increase frequency
     }
    }
    cout << str[i] << " = " << count << endl;
}
return 0;
}


/*--------------------------------------------------------- Count frequency using string ------------------------------------------------------

The frequency of a chaaracter is the number of times it appears in a string

Example:

Input:
apple

Output:
a = 1
p = 2
p = 2
l = 1
e = 1


This program demonstrate:-
1. string-> used to store the input string
2. Nested Loops-> used to compare each character with every other character
3. Conditional statements-> used to check whether two characters are equal
4. String Traversal-> used to visit every character of the string
5. Frequency Counting->  used to counnt how many times each character appears
6. Brute Force Technique-> used to calculate the frequency by comparing every possible pair of character


Algorithm:-
1. Read the input string
2. Traverse the string using an outer  loop
3. Initialize count = 0;
4. Traverse the string again using an inner loop
5. Compare the selected character with every character
6. If both character are equal, increment count
7. print the character and its frequency
8. repeat for all characters

Working flow:-
START
↓
Input string
↓
Select one character
↓
Set count = 0
↓
Compare with every character
↓
Characters equal?
↓ YES
Increment count
↓
Print character and frequency
↓
Repeat for all characters
↓
END

*/