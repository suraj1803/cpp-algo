#include <iostream>
using namespace std;

void remove(char s[])
{
    if (s[0] == '\0')
        return;

    if (s[0] != 'x')
        remove(s + 1);
    else
    {
        int i = 0;
        while (s[i] != '\0')
        {
            s[i] = s[i + 1];
            i++;
        }

        remove(s);
    }
}

int main()
{
    char arr[] = "xabcxcdx";
    cout << arr << endl;
    remove(arr);
    cout << arr << endl;
    return 0;
}