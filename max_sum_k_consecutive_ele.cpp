#include <iostream>
using namespace std;

int main () {
   
    int n;
    int k;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements off array: ";
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
     
    cout << "Enter value of k: ";
    cin >> k;

    int windowsum = 0;       // sum of current window

    for(int i = 0; i < k; i++)
    {
        windowsum += arr[i];    // calculate first window sum
    }
    
    int maxsum = windowsum;    // store maximum sum

    for(int i = k; i < n; i++)
    {
        // remove left element and add new right element
        windowsum = windowsum - arr[i - k] + arr[i];

        // update maximum sum
        if(windowsum > maxsum)
        {
            maxsum = windowsum;
        }
    }
    cout << "Maximum sum = " << maxsum;

}