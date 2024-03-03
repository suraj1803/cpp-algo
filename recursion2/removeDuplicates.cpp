#include <iostream>
#include <string>
using namespace std;

void removeConseDuplicates(char arr[])
{
    if (arr[0] == '\0')
        return;
    
    removeConseDuplicates(arr + 1);

    if (arr[0] == arr[1])
    {
        int i = 0;
        while (arr[i] != '\0')
        {
            arr[i] = arr[i + 1];
            i++;
        }
    }
}

int main()
{
    char arr[] = "abbbda";
    removeConseDuplicates(arr);
    cout << arr << endl;
    return 0;
}