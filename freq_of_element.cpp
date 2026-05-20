#include <iostream>
using namespace std;

int main() {

    int n, count = 0;
     cout << "Enter size of array: ";
     cin >> n;

    int arr[n];
    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
    cin  >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        count = 0;
    for(int j = 0; j < n; j++)
    {
        if(arr[i] == arr[j])
        {
        count++;
    }
}
    cout << arr[i] << " appears " << count << " times" << endl;;
}
return 0;
}