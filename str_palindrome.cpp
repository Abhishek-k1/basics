#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;

    cout << "Enter string : ";
    cin >> str;
    bool palindrome = true;    // assume string is palindrome

    // loop from start to middle of string
    for (int i = 0; i < str.length() / 2; i++)
    {

    // compare left character with right character
        if (str[i] != str[str.length() - 1 - i])
        {
            palindrome = false;  // if mismatch found, not palindrome
        }
    }
    if (palindrome == true)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "string is not palindrome";
    }

    return 0;
}