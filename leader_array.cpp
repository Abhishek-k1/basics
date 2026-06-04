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

    // check each element
    for (int i = 0; i < n; i++)
    {
      bool leader = true;   // assume  current element is leader

    // check element to the right
    for (int j = i + 1; j < n; j++)
    {
       
        // found a bigger element on the right
        if(arr[j] > arr[i])
      {
        leader = false;
        break;
      }
    }

    // if no bigger element found
    if(leader == true)
    {
        cout << arr[i] << " ";
    }
}
return 0;
}