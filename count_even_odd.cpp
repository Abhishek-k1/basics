#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
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

/*--------------------------------------- Count Even and Odd Numbers in an array ------------------------------------------------
An even number is divisible by 2 whereas an odd number is not divisible by 2

Algorithm:
1. Read the size of the array
2. Input all array elements
3. Initialize:
    even = 0;
    odd = 0;
4. Traverse the array from index 0 to n-1
5. For each element
    if arr[i] % 2 == 0
      increment even count
    otherwise
      increment odd count
6. Print the total even count
7. Print the total odd count

Working:

START
↓
Input array size
↓
Input array elements
↓
Initialize
even = 0
odd = 0
↓
Traverse array
↓
arr[i] % 2 == 0 ?
↓ YES
even++
↓ NO
odd++
↓
Repeat for all elements
↓
Print even count
↓
Print odd count
↓
END
*/