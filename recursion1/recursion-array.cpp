#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    
    return arr[0] < arr[1] && isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    cout << isSorted(arr, 4);

    return 0;
}