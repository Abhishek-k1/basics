#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int main() 
{
  int r, c;    // Number of rows and columns

  cout << "Enter number of rows: ";
  cin >> r;

  cout << "Enter number of columns: ";
  cin >> c;

  int arr[r][c];   // Matrix

  cout << "Enter element of matrix: ";

  int largest = INT_MIN;    // stores the largest element
  int row  = -1;            // stores row index of largest element
  int col = -1;            // stores column index of largest element

  // Input matrix and find largest element
  for(int i = 0; i < r; i++ )
  {
    for(int j = 0; j < c; j++)
    {
        cin >> arr[i][j]; // Input current element
    
    // check if current element is larger
    if(arr[i][j] > largest)
    
    {
        largest = arr[i][j];   // update largest element
        row = i;               // save row index
        col = j;               // save column index
    }
    }
  }

  // print the result
  cout << "Largest element: " << largest << endl;
  cout << "Row: " << row << endl;
  cout << "column: " << col << endl;

  return 0;

}

