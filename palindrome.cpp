#include <iostream>
using namespace std;

int main()
{

  int n, original, reverse = 0, digit;

  cout << "Enter a number: "; // take input from user
  cin >> n;

  original = n; // save originalnumber

  while (n > 0) // loop until number becamess 0
  {
    digit = n % 10;                 // take last digit
    reverse = reverse * 10 + digit; // build reverse
    n = n / 10;                     // remove last digit
  }

  if (original == reverse) // check palindrome  condition
  {
    cout << "Palindrome Number";
  }
  else
  {
    cout << "Not a palindrome Number";
  }

  return 0;
}

/*---------------------------------------------- palindrome Number----------------------------------------------------
A palindrome number is a number that reads the same from left to right and from right to left

This program demonstrate:-
1. Variables
2. While loop
3. Arithmetic operators
4. Number manipulation
5. Co0nditional statements
6. Reverse Number Logic


Algorithm:-
1. Read a number from the user
2. store the original number in another variable
3. Initialize:
      reverse = 0;
4. Repeat while n > 0;
    Extract the last digit using:
      digit = n % 10;
    Build the reversed number:
      reverse = reverse * 10 + digit;
    Remove the last digit:
      n =  n/10;
5. Compare the original number with the reversed number
6. if both are equal, print palindrome number
7. otherwise print not a palindrome number

Working flow:-
START
↓
Input number
↓
Store original number
↓
reverse = 0
↓
n > 0 ?
↓ NO
Compare original and reverse
↓
Equal ?
↓ YES → Palindrome Number
↓ NO → Not Palindrome Number
↓
END
↓ YES
digit = n % 10
↓
reverse = reverse × 10 + digit
↓
n = n / 10
↓
Repeat
*/