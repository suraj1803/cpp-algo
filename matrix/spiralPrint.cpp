#include <iostream>
#include <vector>
using namespace std;

void print(const vector<vector<int>> &arr)  
{
    int top = 0; 
    int bottom = arr.size() - 1;
    int left = 0;
    int right = arr[0].size() - 1;

    while (top <= bottom && left <= right) 
    {
        // first row
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // last col
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--; 

        // last row
        for (int i = right;i >= left; i--)
            cout << arr[bottom][i] << " ";
        bottom--;

        // first col
        for (int i = bottom; i >= top; i--)
            cout << arr[i][left] << " ";
        left++;
    }
    cout << "\n";
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {1, 2, 3, 4}, 
        {4, 3, 2, 1}    
    };


    print(arr);

    return 0;
}