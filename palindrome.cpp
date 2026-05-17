#include <iostream>
using namespace std;

int main() {
    
    int n, original, reverse = 0, digit; 

     cout << "Enter a number: ";      // take input from user
     cin >> n;

     original = n;  // save originalnumber

     while (n > 0)    // loop until number becamess 0
     {
        digit = n % 10;                      // take last digit
        reverse = reverse * 10 + digit;     // build reverse
        n = n/10;                          // remove last digit
     }

     if (original == reverse)         // check palindrome  condition
    {
      cout << "Palindrome Number";
    }
    else
    {
      cout << "Not a palindrome Number";
    }

    
    return 0;
}
