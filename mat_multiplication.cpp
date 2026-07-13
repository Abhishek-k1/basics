#include <iostream>
using namespace std;

int main() 
{
    int r, c;     //stores number of rowss and columns

    cout << "Enter numbers of rows: ";
    cin >> r;

    cout << "Enter numbers of columns: ";
    cin >> c;

    int arr1[r][c];        // First matrix
    int arr2[r][c];        // Second matrix
    int multiply[r][c];    // stores the product of both matrices

    cout << "Enter elements of first matrix:\n";

    // Input elements of the first matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";

    // Input elements of the second matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Perform matrix multiplication
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            multiply[i][j] = 0;  // Initialize current element to 0
            
            // Multiply row of first matrix with column of second matrix
            for(int k = 0; k < c; k++)
            {
                multiply[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "product of matrices:\n";

    // Print the resultant matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << multiply[i][j] << " ";
        }
        cout << endl;  // move to the next row
    }

    return 0; //program, ends successfully
}