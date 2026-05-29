#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int expected;
    int missing;

    // take value of n
    cout << "Enter size of array: ";
    cin >> n;

    // array size is n-1 because one number is missing
    int arr[n - 1];
    
    // take array element
    cout << "Enter element of array: ";

    for(int i = 0; i < n - 1; i++)
    {
       cin >> arr[i];   // store array element

    // calculate actual sum
       sum += arr[i];
    }
    
    // calculate expected sum from 1 to n
     expected = n * (n + 1) / 2;

    // find missing number
     missing = expected - sum;
    
    cout << "Missing number is: " << missing;

    return 0;
}
