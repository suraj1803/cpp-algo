#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;
    cout << arr << endl;
    cout << ptr << endl;

    cout << &arr << endl;
    cout << &ptr << endl;
    cout << sizeof(ptr) << endl;

    // arr = arr + 1;  
    // you can not do that because there is no storage allocated for variable named arr
    // so how can you update it's value
    // because there is no storage allocated for arr variable it's just a name
    // in symbol table

    cout << *arr << endl;
    cout << *(arr + 1) << endl;

    return 0;
}