#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a = {
        {1, 1},
        {2, 2}
    };

    vector<vector<int>> b = {
        { 1, 1 },
        { 2, 2 }
    };

    vector<vector<int>> c(a.size(), vector<int>(a.size()));

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            int sum = 0;
            for (int k = 0; k < a[0].size(); k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < c[0].size(); j++) 
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
        

    cout << endl;

    return 0;
}