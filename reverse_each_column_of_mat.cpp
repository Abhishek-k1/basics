#include <iostream>
using namespace std;

int main() {

    int r, c;   // stores number of rows and columns

    cout << "Enter numbers of rows: ";
    cin >> r;
    
    cout << "Enter numbers of columns: ";
    cin >> c;

    int arr1[r][c];   // matrix

    cout << "Enter elements of first matrix: ";

    // input matrix elements
    for(int i= 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // Reverse each column
    for(int j = 0; j < c; j++)
    {
        int top = 0;             // First row of current column
        int bottom = r - 1;      //  last row of current column

        //swap elements until pointters meet
        while(top < bottom)
        {
            int temp = arr1[top][j];         // store top element
            arr1[top][j] = arr1[bottom][j];  // MOve bottom element to top
            arr1[bottom][j] = temp;          // place stored element at bottom

            top++;      // Move top pointer downward
            bottom--;   // Move bottom pointer upward
        }
    }

    cout << "\nReversed Matrix:\n";

    // print reversed matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl; // Move to next row
    }

    return 0;
}

