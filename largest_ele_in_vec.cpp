#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    // Take size ofvector
    cout << "Enter size: ";
    cin >> n;

    vector<int> v; // integer vector

    // Take vector elements
    cout << "Enter vector elements: ";

    for (int i = 0; i < n; i++)
    {
        int x; // Temporary variable for input

        cin >> x;

        v.push_back(x); // add element into vector
    }

    // assume first element is largest
    int largest = v[0];

    // transverse vector from second element
    for (int i = 1; i < n; i++)
    {

        if (v[i] > largest) // check largest element
        {

            largest = v[i]; // update largest values
        }
    }
    cout << "Largest element is: " << largest;

    return 0;
}