#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{

    string str;

    // Take full sentence input
    cout << "Enter string: ";
    getline(cin, str);

    // store cleaned string
    string cleaned = "";

    for (int i = 0; i < str.length(); i++)
    {
        // ignore spaces
        if (str[i] != ' ')
        {
            cleaned += tolower(str[i]);
        }
    }

    // Print combined cleaned string
    cout << "Combined string: " << cleaned << endl;

    // Two pointers
    int left = 0;
    int right = cleaned.length() - 1;

    bool palindrome = true;

    // check palindrome
    while(left < right)
    {
        if (cleaned[left] != cleaned[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    // final result
    if (palindrome)
    {
        cout << "Valid Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}
