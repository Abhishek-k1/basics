#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, int> freq;    // stores frequency of each element

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    bool found = false;    // to check unique element exits

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)    // unique elements 
        {
            cout << "First non repeating element: " << arr[i];
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Non unique element found";
    }
    return 0;
}