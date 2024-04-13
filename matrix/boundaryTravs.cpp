#include <iostream>
#include <vector>
using namespace std;

void printBoundary(const vector<vector<int>> &arr)
{
    int r = arr.size();
    int c = arr[0].size();

    // first row
    for (int j = 0; j <= c - 1; j++)
    {
        cout << arr[0][j] << " ";
    }

    // last col
    for (int j = 1; j <= r - 1; j++)
    {
        cout << arr[j][c - 1] << " ";
    }

    // last row
    for (int j = c - 2; j >= 0; j--)
    {
        cout << arr[r - 1][j] << " ";
    }

    // first col
    for (int j = r - 2; j >= 1; j--)
    {
        cout << arr[j][0] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {3, 2, 4}
    };

    printBoundary(arr);

    return 0;
}