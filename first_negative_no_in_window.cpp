#include <iostream>
using namespace std;

int main () {
   
    int n;     // size of array
    int k;     // window size

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];    //array of size  n

    cout << "Enter elements off array: ";
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];   // input array elements
    }
     
    cout << "Enter value of k: ";
    cin >> k;

    // print all windows
    for(int i = 0; i <= n - k; i++)
    {
        // print current window
        for(int j = i; j < i+ k; j++)
    {
    cout << arr[j] << " ";
    }
    cout << endl;
    }

    // find first negative number in every window
    for(int i = 0; i <= n-k; i++)
    {
          bool found =  false;  // assume no negative number found
    
    // check current window
    for(int j = i; j < i + k; j++)
    {
        // if negative number found
        if(arr[j] < 0)
        {
          cout << arr[j] << " ";   // print first negative
          found = true;            // mark as found
          break;                  // stoip check current window
        }
    }

     //if no negative number exists in current found
        if(!found)
        {
            cout <<" \\_|_/:";   //( backslash use here)
        }
    }
    return 0;
    }
