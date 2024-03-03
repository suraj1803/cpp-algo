#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    int **ptr2 = &ptr;
    cout << x << endl;
    (**ptr2)++;
    cout << x << endl;

    cout << ptr << endl;
    (*ptr2)++;
    cout << ptr << endl;

    return 0;
}