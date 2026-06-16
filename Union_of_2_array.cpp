#include <iostream>
#include <map>
using namespace std;

int main() {

  map<int, int> freq;  // map stores unique elements and their frequency

  int n1;
  cout << "Enter size of array 1: ";
  cin >> n1;     // input size of first array

  int arr1[n1];  // first array

  cout << "Enter elements of arr1: ";
  for(int i = 0; i < n1; i++)
  {
    cin >> arr1[i];      // input first array elements
  }
 
  int n2;
  cout << "Enter size of array 2: ";
  cin >> n2;          // input size of second array

  int arr2[n2];       // second array

  cout << "Enter elements of arr2: ";
  for(int i = 0; i < n2; i++)
  {
    cin >> arr2[i];    // input second array elements
  }
 
  // insert first array elements into map
  for(int i = 0; i < n1; i++)
  {
    freq[arr1[i]]++;     // increase frequency of arr1 element
  }

  // insert second array elements into map
  for(int i = 0; i < n2; i++)
  {
    freq[arr2[i]]++;   // increase frequency of arr2 element
  }

  cout << "Union Elements: ";

  // print all unique elements
  for(auto it = freq.begin(); it != freq.end(); it++)
  {
     cout << it->first << " ";
  }

  cout << endl;

  // print count of union elements
  cout << "Union Size = " << freq.size();

  return 0;
}