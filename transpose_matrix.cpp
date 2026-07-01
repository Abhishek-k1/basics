#include <iostream>
using namespace std;

int main() {
    
    int r, c;  // stores number of rows and columns

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter numbet of columns: ";
    cin >> c;

    int arr[r][c];   // 2D array
   
    cout << "Enter matrix elements:\n";

    //Input matrix elements
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";

    //Print the original matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;        // move to next row
    }

    cout << "\nTranspose Matrix:\n";

    // print transpose of the matrix
    // Rows become columns and columns become rows
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            cout << arr[j][i] << " ";   // swap row and column indices
        }
        cout << endl;  // move to next row of transpose
    }
    return 0; // program end successfully
}
