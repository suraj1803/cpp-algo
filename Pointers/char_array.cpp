#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    char b[] = "abc";
    // const char *c = "suraj";
    char c = 'c';
    char *cptr = &c; // this is not appropiate 
    // it will not find any null terminatnig charachter

    cout << a << endl;
    cout << b << endl;
    cout << cptr << endl;
    
    char ch = 'a';
    char* chptr = &ch;
    cout << chptr << "\n";

    return 0;
}
