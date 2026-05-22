#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    int count = 0;

    cout << "Enter string: ";
    cin >> str;

    // outer loop selects one character
    for(int i = 0; i < str.length(); i++)
    {
     count = 0; // reset count for new character

     // Inner loop compares selected character
     // with all characcters
     for(int j = 0; j < str.length(); j++)
     {
        if(str[i] == str[j])  // check matching characters
     {
        count++; // increase frequency
     }
    }
    cout << str[i] << " = " << count << endl;
}
return 0;
}