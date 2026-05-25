#include <iostream>
#include <map>
 
using namespace std;
 
int main()
{
 
   // Map to  store element and frequency
    map<int, int> mp;

    int n;

    // Take size of array
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    // Take array  elements
    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    
    // Increase frequency of current element
     mp[arr[i]]++;
    }

    // print frequencies
    cout << "Element Frequency: " << endl;

    for(auto x : mp)
    {
        // x.first -> element
        // x.second -> frequency

      cout << x.first << " -> " << x.second << endl;
    }

    return 0;

}