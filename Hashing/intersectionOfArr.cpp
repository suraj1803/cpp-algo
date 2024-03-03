#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> arr1 = {10, 15, 20, 25, 30, 50};
    vector<int> arr2 = {30, 5, 15, 80};

    unordered_set<int> um;
    for (int i = 0; i < arr2.size(); i++) 
    {
        um.insert(arr2[i]);
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        if (um.find(arr1[i]) != um.end())
            cout << arr1[i] << " ";
    }

    cout << "\n";


    return 0;
}