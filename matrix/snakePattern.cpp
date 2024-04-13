#include <iostream>
#include <vector>
using namespace std;

void printSnake(const vector<vector <int>> &arr) {
    bool flag = true;
    for (int i = 0; i < arr.size(); i++) {
        if (flag) {
            for (int j = 0; j < arr[i].size(); j++) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            for (int j = arr[i].size() - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }

        flag = !flag;
        cout << "\n";
    }
}

int main()
{
    vector<vector<int>>  arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 8, 1}};
    printSnake(arr);

    return 0;
}