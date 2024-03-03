#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *p = &i; 


    cout << i << "\n";
    cout << p << "\n";
    cout << *p << "\n";

    return 0;
}