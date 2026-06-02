#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    map<char,int> freq;

    string str1;
    string str2;

    cout << "Enter string1: ";
    getline(cin, str1);

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

