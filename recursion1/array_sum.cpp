#include <iostream>
using namespace std;

int sum(int arr[], int size) 
{
    if (size == 0)
        return 0;
    
    int smallSum = sum(arr + 1, size - 1);
    return arr[0] + smallSum;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    cout << sum(arr, 4) << endl;

    return 0;
}