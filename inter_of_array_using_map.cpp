#include <iostream>
#include <map>
using namespace std;

int main () {

    map<int, int> freq;   // stores elements of first array

    int n1;
    cout << "Enter size of array1: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter elements of array1: ";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];     // input first array
    }

    int n2;
    cout << "Enter size of array2: ";
    cin >> n2;

    int arr2[n2];        // input second array

    cout << "Enter elemnts of array2: ";
    for(int i  = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // store first array element in map
    for(int i = 0; i < n1; i++)
    {
        freq[arr1[i]]++;
    }
    
    // check each element of second  array
    for(int i = 0; i < n2; i++)
    {
        if(freq[arr2[i]] > 0)     // element exists in first array
        {
            cout << arr2[i] << " ";     // print common element

            freq[arr2[i]] = 0;   // avoid duplicate printing
        }
    }

 return 0;
}
