#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of n: "; // asking user for array size
    cin >> n;             // input size

    int arr[n];        // creating array of size n

// asking user to input element
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {    // input array
        cin >> arr[i];      // storing element in array
    }

    // print in reverse
    for (int i = n - 1; i >= 0; i--) {     // reverse array
        cout << arr[i] << " ";        //  printing from last to first
    }

    return 0;
}