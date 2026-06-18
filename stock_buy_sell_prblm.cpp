#include <iostream>
using namespace std;

int main ()
{
    int n;    // stores size of array


    cout << "Enter size of  array: ";
    cin >> n;

    int arr[n];       // array of size n

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];    // input array elements
    }

    int minprice = arr[0];    // minimum price seen so far
    int maxprofit = 0;        // maximum profit found so far
    int profit = 0;          // current profit

    // Traverse array from second element
    for(int i = 1; i < n; i++)
    {
        // calculate profit if we sell on current day
        profit = arr[i] - minprice;

        // update maximum profit if current profit is greater
        if(profit > maxprofit)
        {
            maxprofit = profit;
        }

        // update minimum price if smaller price is found
            if(arr[i] <  minprice)
        {
            minprice = arr[i];
        }
    }
      cout << "Maximum profit = " << maxprofit << endl;
}