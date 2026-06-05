#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter element of array: ";

    // take array input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pick each element one by one
    for (int i = 0; i < n; i++)
    {
        int product = 1; // reset product for current index

        // traverse whole array
        for (int j = 0; j < n; j++)
        {

            // skip current element
            if (i != j)
            {
                product *= arr[j];
            }
        }
        cout << product << "  ";
    }
    return 0;
}