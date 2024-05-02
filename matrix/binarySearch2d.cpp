#include <iostream>
#include <vector>
using namespace std;

vector<int> search(vector<vector<int>> &arr, int target) {
    int r = 0;
    int c = arr[0].size() - 1;

    while (r < arr.size() && c >= 0) {
        if (arr[r][c] == target) {
            return {r, c};
        }
        else if (arr[r][c] > target ) {
            c--;
        }
        else if (arr[r][c] < target) {
            r++;
        }
    }
    
    return {-1, -1};
}

int main()
{
    vector<vector<int>> arr =  {
        {1,  4,  7,  11, 15},
        {2,  5,  8,  12, 19},
        {3,  6,  9,  16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    vector<int> result = search(arr, 13);
    
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << "\n";

    return 0;
}