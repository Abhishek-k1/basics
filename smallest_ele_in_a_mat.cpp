#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main()
{
    int r, c; // Number of rows and columns

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int arr[r][c];

    cout << "Enter element of matrix: ";

    int smallest = INT_MAX; // store the smallest element
    int row = -1;           // stores row index of smallest element
    int col = -1;           // stores column index of smallest element

    // Input matrix and find the smallest element
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) // Traverse each column
        {
            cin >> arr[i][j]; // Input current element

            // check if current element is smaller
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j]; // Update smallest element
                row = i;              // save row index
                col = j;              // save column index
            }
        }
    }

    // print the result
    cout << "Smallest element: " << smallest << endl;
    cout << "Row: " << row << endl;
    cout << "Column: " << col << endl;

    return 0;
}