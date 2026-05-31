#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() 
{

    // map to store frequency of character
    map<char,int> freq;

    string str;

    // take input string
    cout << "Enter string: ";
    getline(cin, str);

    // count frequency of each character
    for(int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    bool found = false;

    // find first non-repeating character
    for(int i = 0; i < str.length(); i++)
    {
        if(freq[str[i]] == 1)
        {
            cout << "First non-repeating character: " << str[i];
            found =  true;
            break;
        }
    }

    // if no non-repeating character  exists
    if(!found)
    {
        cout << "No non-repeating character found";
    }
    return 0;

}