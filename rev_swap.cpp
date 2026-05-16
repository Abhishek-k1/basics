#include <iostream>
using namespace std;

int main() {

int n;
cout << "Enter size of array: ";    // asking user for size
 cin >> n;         // input size

int arr[n];            // creating array  of size n

cout << "Enter " << n << " elements: ";    // taking input of array element
 for(int i = 0; i < n; i++)     // input array
 {
    cin >> arr[i];  // storingelement in array
 }

 int left = 0;
 int right = n-1;

 while(left < right) // swap element from both ends
 {

   int temp = arr[left]; // store left value in temp
   arr[left] = arr[right];   // move right value to left
   arr[right] = temp;   // put temp value to right

    left++;        // move left to forward
    right--;       // move right to backward
 }

 cout << "Reversed array: ";
 for (int i = 0; i < n; i++)      // reverse array
 {
    cout << arr[i] << " ";   // output element
 }

 return 0;
}

