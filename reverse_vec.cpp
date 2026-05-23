#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;

    // Take size of vector
    cout << "Enter size : ";
    cin >> n;

    // Integer vector
    vector<int> v;

    // Take vector elements
    cout << "Enter vector elements: ";

    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;

        // Add element inti vector
        v.push_back(x);
    }

    // Print vector in Reverse order
    cout << "Reversed vector: ";

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}