#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int upper = 0, lower = 0;

    cout << "Enter string: ";
    cin >> str;

    upper = 0;
    lower = 0;

    // Traverse each character of string
    for(int i = 0; i < str.length(); i++)
    {
      if(str[i] >= 'A' && str[i] <= 'Z')   //check uppercase letters
      {
         upper++;  
    }
      if(str[i] >= 'a' && str[i] <= 'z')   //check lowercase letters
      {
        lower++;
      }
    }

       cout << "Uppercase: " << upper << endl;
       cout <<  "Lowercase: " << lower << endl;

     return 0;
}
/*------------------------------------------------ Count Uppercase and Lowercase Character ---------------------------------------------------------------

To count upper case and lower case 

Algorithm:-
1. Read the input string
2. Initialize
    upper = 0
    lower = 0
3. Traverse the string from index 0 to length 1
4. For each character:
    -> if character is between 'A' and 'Z'
       increment upper
    -> if character is between 'a' and 'z'
       increment lower
5. print uppercase count
6. print lowercase count



Working flow:-
START
↓
Input string
↓
upper = 0
lower = 0
↓
Traverse string
↓
Character between A-Z ?
↓ YES
upper++
↓
Character between a-z ?
↓ YES
lower++
↓
Repeat for all characters
↓
Print upper count
↓
Print lower count
↓
END



*/