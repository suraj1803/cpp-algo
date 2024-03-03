#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int* p = &i;

    cout << p << endl;
    int *q = p + 2;
    cout << q << endl;
    cout << p << endl;


    return 0;
}