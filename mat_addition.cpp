#include <iostream>
using namespace std;

int main()
{
    int r, c;   // stores number of rows and columns

    cout << "Enter nummbers of rows: ";
    cin >> r;

    cout << "Enter numbers of columns: ";
    cin >> c;

    int arr1[r][c];   // first matrix
    int arr2[r][c];   // second matrix
    int sum[r][c];    // stores the sum of both matrices

    cout << "Enter elements of first matrix:\n";

    // input elements of the first matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";

    // input elements of second matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // add corresponding elements of both matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "\nSum of the matrices:\n";

    // print the resultant matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;  // Move to thenext row
    }

    return 0;
}