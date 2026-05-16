#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter a  and b";
  cin >> a >> b; // taking input range from user

  // outer loop: goes through every numberfrom a to b
  for (int i = a; i <= b; i++)
  {

    if (i < 2) // skip no less than 2
      continue;

    int j; // variable use for checking divisors

    // inner loop: check if i has any divisor
    for (j = 2; j < i; j++)
    {

      // if i is divisible by j-> not prime
      if (i % j == 0)

        break; // stop checking
    }

    // if j reached i -> no divisor found -> prime number
    if (j == i)
      cout << i << "  ";
  }

  return 0;
}