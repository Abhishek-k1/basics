#include <iostream>
using namespace std;

int main()
{

    int n;         // it print upto 10 digit if we have use long long int then print upto 19  if further want to count then use string
    int count = 0; // count  total digits

    // take number from user
    cout << "Enter a number: ";
    cin >> n;

    // loop  runs until number becomes 0
    while (n > 0)
    {
        // increase digit count
        count++;

        // romove last digit
        n = n / 10;
    }

    // print  total digits
    cout << "Total digits: " << count;

    return 0;
}

/*

#include <iostream>
#include <string>
using namespace std;

int main() {

      string n;

      cout << "Enter a number: ";
      cin >> n;

      cout << "Total digits: " << n.length();

      return 0;

}
*/
