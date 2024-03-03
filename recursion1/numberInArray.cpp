#include <iostream>
using namespace std;

bool isPresent(int arr[], int x, int size)
{
    if (size == 1)
        return arr[0] == x;
    
    if (arr[0] == x)
        return true;

    return isPresent(arr + 1, x, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << isPresent(arr, 6, 5);

    return 0;
}