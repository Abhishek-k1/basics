#include <iostream>
#include <algorithm>
#include <string>
#include  <vector>
using namespace std;

int main () {
    
     int n;

     // Take number of strings
    cout << "Enter number of string:";
    cin >> n;
     
    // create vector of strings
    vector<string> v;

    string s;

    // Take string input
    cout << "Enter strings:";

    for(int i = 0; i < n; i++)
    {
    cin >> s;

    // Insert vector into vector
    v.push_back(s);
    }

    // sort vector alphabetically
    sort(v.begin(), v.end());

    cout << "Sorted strings are:" << endl;
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

return 0;
}