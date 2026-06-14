#include <iostream>    
using namespace std;

int main() {

    int n;

    // take size of array
    cout << "Enter size of array: ";
    cin >> n;

    //declare original array
    int arr[n];

    // take array elements input
    cout << "Enter  element of array: ";
    for(int i = 0; i < n; i++)
    {
      cin >> arr[i];  // store elements in array
    }

    int k; // variable to score rotation value

    // take k input
    cout << "Enter k value: ";
    cin >> k;

    // handle k greater than array size
    k = k % n;

    // temporary array for rotated result
    int temp[n];

    // rotation logic
    for(int i = 0; i < n; i++)
    {
        // calculate new rotated index
        int newIndex = (i - k + n) % n;

        // place current element in new position
        temp[newIndex] = arr[i];
    }

    // print rotated array
      cout << "Rotated array: ";

      for(int i = 0; i < n; i++)
      {
        cout << temp[i] << " ";
      }
    

    return 0;

}