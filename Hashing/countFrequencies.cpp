#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
        um[arr[i]]++;
    
    for (auto item: um)
        cout << item.first << " " << item.second << "\n";

    return 0;
}
