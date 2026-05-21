#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;       // Variable to store string
    int n, count = 0; // count stores number of vowels

    cout << "Enter string: "; // take string input
    cin >> str;

    count = 0; // Initialize vowel count

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