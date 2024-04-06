#include <iostream>
#include <string>
using namespace std;

bool helper(string str, int start, int end)
{
    if (start >= end)
        return true;
    
    return str[start] == str[end] && helper(str, start + 1, end - 1);
}

bool isPalindrome(string str)
{
    return helper(str, 0, str.size() - 1);
}


int main()
{
    cout << isPalindrome("abbac") ;

    return 0;
}
