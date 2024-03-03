#include <iostream>
using namespace std;

int count(int arr[], int size)
{
    if (size == 0)
        return 0;
    
    int res = count(arr + 1, size - 1);
    if (arr[0] == 0)
        return res + 1;
    return res;
}

int main()
{
    int arr[] = {1, 1, 0, 2, 0};
    cout << count(arr, 5) << endl;
    return 0;
}