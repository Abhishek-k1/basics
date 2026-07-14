#include <iostream>
using namespace std;

int main()
{

    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int arr1[r][c];

    cout << "Enter elements of first matrix: ";

    // Input matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // Reverse each row
    for (int i = 0; i < r; i++)
    {
        int left = 0;
        int right = c - 1;

        while (left < right)
        {

            // swap elements
            int temp = arr1[i][left];
            arr1[i][left] = arr1[i][right];
            arr1[i][right] = temp;

            // Move pointers
            left++;
            right--;
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
        cout << endl;
    }

    return 0;
}