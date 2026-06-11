#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    int longest =  1;    // stores longest sequence length
    int current = 1;     // stores current sequence length

     cout<< "Enter size of array: ";
     cin >> n;

    int arr[n];
    cout << "Enter element of array:";

    for(int i = 0; i  < n; i++)
    {
        cin >> arr[i];  // inpur array
    }
    
    // sort array to bring consecutive numbers together
    sort(arr, arr + n);

    for(int i = 1; i < n; i++)
    {

        if(arr[i] ==  arr[i - 1] + 1)  // consecutive number found
        {
            current++;                 // increase current streak
        }
        else if(arr[i] == arr[i - 1]) // duplicate number
        {
            continue;                 // ignore duplicate
        }
        else                          // sequence broken
        {
            current = 1;              // start with sequence
        }
        if(current > longest)         // update longest sequence
        {
            longest = current;
        }
    }
        cout << "Longest Consecutive Length = " << longest;  // print answer

        return 0;
}