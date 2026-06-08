#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array:";
    cin >> n;

    int arr[n];

    cout << "Enter element of array:";

    // Input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool found = false; // tracks whether equilibrium index exists

    // check  each index
    for (int i = 0; i < n; i++)
    {
        int leftsum = 0;
        int rightsum = 0;

        // calculate left sum
        for (int j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }
       
        // calculate right sum
        for (int j = i + 1; j < n; j++)
        {
            rightsum += arr[j];
        }

        // check equillibrium condition
        if (leftsum == rightsum)
        {
            cout << "Equilibrium Index = " << i << endl;
            found = true;
        }
    }

    // If no equillibrium index found
    if(found == false)
    {
        cout << "No Equillibrium Index Found";
    }
    return 0;
}
