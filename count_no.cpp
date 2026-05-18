#include <iostream>
using namespace std;

int main() {

    long long int n;   // store input number   
    int count = 0;  // count  total digits

    // take number from user
    cout << "Enter a number: ";    
    cin >>  n;

    // loop  runs until number becomes 0
   while(n > 0)
   {
    // increase digit count
    count++;

    //romove last digit
  n = n / 10;
   }

   // print  total digits
   cout << "Total digits: " << count;

    return 0;
}


