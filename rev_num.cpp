#include <iostream>
using namespace std;

int main() {

    int n;  // it print upto 10 digit if we write long long int then it print upto 19 digit if we want to reverse more then 19 digit then use string
    int reverse = 0;
    int digit;

    cout << "Enter a number: ";    // take number input
    cin >> n;

    reverse = 0;

    while(n > 0)  // loop runs until number becomes 0
    {
        digit = n % 10;                    // get last digit
        reverse = reverse * 10 + digit;   // build reversed number
        n = n / 10;                      // remove last digit
    }

    // print reversed number
    cout << "Reversed number is: "  << reverse; 

    return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string n;

   cout << "Enter a large  number: ";
   cin >> n;

   cout << "Reversed number is: ";

   for(int i = n.length() - 1; i >= 0; i--)
   {
       cout << n[i];
   }
       return 0;
}

*/