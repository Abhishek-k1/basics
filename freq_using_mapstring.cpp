#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // map to store char frequency
    // key = character
    // value = count
    map<char, int> freq;

    string str;

    // take complete sentence input
    cout << "Enter string: ";
    getline(cin, str);

    // traverse string character by character
    for(int i = 0; i < str.length(); i++)
    {

        // ignore spaces
        if(str[i] != ' ')
        freq[str[i]]++;    // increase frequency of character
    }

    // traverse map and print frequencies
     for(auto it =  freq.begin(); it != freq.end(); it++)
        
        {
        cout << it->first << " = " << it->second << endl;
     }
    
     return 0;

}
