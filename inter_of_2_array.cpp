#include <iostream>
using namespace std;

int main() {

    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter size of second array: ";
    cin  >> n2;

    int arr[i];
    int arr[j];

    cout << "Enter elements of array 1: ";
     for(int i = 0; i < n1; i++)
     {
        cin >> arr[i];
     }
    
     cout << "Enter elements of array 2: ";
     for(int j = 0; j < n2; j++)
     {
        cin >> arr[j];
     
     if(arr[i] == arr[j])
     {
        cout << arr[i] << " ";
     }
    }
}
