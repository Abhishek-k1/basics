#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str;

    cout << "Enter string: "; 
    getline(cin, str);

    // create stream from sentence
    stringstream ss(str);

    string word;           // stores current word
    string longest = "";  // stores longest  word found so far

    // extract words one by one
    while(ss >> word)
    {
        // if current word is longer
        // than longest word found so far
        if(word.length() > longest.length())
        {
            longest = word;
        }
    }

    cout << longest;

    return 0;

}
