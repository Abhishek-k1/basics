#include <iostream> 
#include <map>
using namespace std;

int main () {

    int n;
    cout << "Enter size of array:";
    cin >> n;

    int arr[n];

    map<int, int> freq;    // number-> frequency

    cout << "Enter element  of array:";

    // take input and count frequency
    for(int i =  0; i < n; i++)
    {
    
        cin >> arr[i];
        freq[arr[i]]++;
    }
    bool found = false;   // check whether majority element exists

    // traverse map
    for(auto it = freq.begin(); it != freq.end(); it++)
     {
        //majority element condition
        if(it->second > n/2)
        {
            cout << "Majority Element = " << it->first << endl;
            found = true;
        }
     }

     // if no majority element found
     if(found ==  false)
     {
        cout << "No Majority Element";
     }

}