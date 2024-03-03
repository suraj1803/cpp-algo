#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1) 
    {
        cout << 1 << endl;
        return;
    }
    print(n - 1);
    cout << n << endl;
}

int main()
{
    print(5);

    return 0;
}