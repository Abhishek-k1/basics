#include <iostream>
using namespace std;

int main() {

int n, largest, second;

cout << "Enter size of array: ";
cin >> n;

int arr[n];
cout <<  "Enter array element: ";



for (int i = 0; i<n; i ++){
cin >> arr[i];
}
largest = arr[0];
second = -1;

for(int i = 0; i < n; i++)
if(arr [i] > largest){
second = largest;
largest = arr[i];
}
else if(arr[i] > second && arr[i] != largest)
{
    second = arr[i];
}
    cout << second;

    return 0;

}
