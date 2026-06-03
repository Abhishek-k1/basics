#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array:";
    cin >> n;
    
    int arr[n];

    cout << "Enter array element: ";

    // take array element
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int even = 0;   // counts even number
    int odd = 0;    // count odd number

    // count even and odd number
    for(int i = 0;  i < n; i++)
    {

        // if number is divisible by 2
        if(arr[i] % 2 == 0)
        {
            even++;  // increase even count
        }
        else
        {
            odd++;  // increase odd count
        }
    }

    cout << "Even count = " << even << endl;
    cout << "Odd count = " << odd << endl;
    
    return 0;
}