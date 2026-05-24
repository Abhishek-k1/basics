#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int upper = 0, lower = 0;

    cout << "Enter string: ";
    cin >> str;

    upper = 0;
    lower = 0;

    // Traverse each character of string
    for(int i = 0; i < str.length(); i++)
    {
      if(str[i] >= 'A' && str[i] <= 'Z')   //check uppercase letters
      {
         upper++;  
    }
      if(str[i] >= 'a' && str[i] <= 'z')   //check lowercase letters
      {
        lower++;
      }
    }

       cout << "Uppercase: " << upper << endl;
       cout <<  "Lowercase: " << lower << endl;

     return 0;
}