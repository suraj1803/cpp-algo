#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    // code here
    unordered_map<int, int> um;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (um.find(arr[i]) != um.end())
            um[arr[i]]++;
        else
            um.insert({arr[i], 1});
    }

    for (int i = 0; i < n; i++)
    {
        if (k - arr[i] == arr[i])
        {
            if (um[arr[i]] > 2)
            {
                count += um[arr[i]] - 1;
                um[arr[i]]--;
            }
            else if (um[arr[i]] == 2)
            {
                count += 1;
                um[arr[i]] -= 2;
            }
        }
        else
        {
            if (um.find(k - arr[i]) != um.end())
            {
                count += um[k - arr[i]];
                um[arr[i]]--;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 1, 1, 1};
    cout << getPairsCount(arr, size(arr), 2) << endl;
    return 0;
}