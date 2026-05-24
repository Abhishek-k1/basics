#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1, str2;

    cout << "Enter 1 string: ";
    cin >> str1;

    cout  << "Enter 2 string: ";
    cin >> str2;

    if(str1 == str2)  // compare both string
    {
        cout << "same";
    }
    else
    {
       cout << "Not same";
    }

    return 0;


}

