#include <iostream>
#include <climits>    // for INT_MIN
using namespace std;

int main()
{

    int r, c;    // Number of rows and columns

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int arr1[r][c]; //matrix

    cout << "Enter elements of matrix: ";

    int maxsum = INT_MIN;   // stores the maximum row sum
    int rowindex = 0;       // stores the index of the row with maximum sum

    // Input matrix and calculate sum of each row
    for (int i = 0; i < r; i++)
    {
        int sum = 0;  // stores sum of current row
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];   //Input matrix element

            sum += arr1[i][j];   // Add current element to row sum
        }

        // check if current row has greater sum
        if (sum > maxsum)
        {
            maxsum = sum;   // update maximum sum
            rowindex = i;   // save current row index
        }
    }
    cout << "Row with maximum sum: " << rowindex << endl;
    cout << "maximum sum " << maxsum << endl ;

    return 0;
}