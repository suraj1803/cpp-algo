#include <iostream>
using namespace std;

// when array is passed in functions it is passed as a pointer
int sum(int *a, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
        ans += a[i];
    return ans;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << sum(a, 5) << endl;
    // you can pass part of an array by using pointer
    int *ptr = a;
    ptr += 2;

    return 0;
}