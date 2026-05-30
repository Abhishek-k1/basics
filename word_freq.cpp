#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    // map to store word frequency
     map<string, int> freq;

     string str;

    // take full sentence
     cout << "Enter sentence: ";
     getline(cin, str);

    // convert sentence into stream
     stringstream ss(str);

    
     string word;

    // extract words one by one
     while (ss >> word)
     {
        freq[word]++;
     }
    // print frequencies
     cout << "\nWord Frequencies:\n";

     for(auto it = freq.begin(); it != freq.end(); it++)
     {
        cout << it->first << " = " << it->second << endl;
     }
     return 0;
}