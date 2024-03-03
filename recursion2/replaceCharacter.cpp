#include <iostream>
using namespace std;

void replace(char s[], char c1, char c2)
{
    if (s[0] == '\0')
        return;
    
    if (s[0] == c1)
        s[0] = c2;

    replace(s + 1, c1, c2);
}

int main()
{
    char s[] = "bacdafa";
    replace(s, 'a', 'e');

    cout << s << endl;
    return 0;
}