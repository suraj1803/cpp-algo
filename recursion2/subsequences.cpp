#include <iostream>
#include <vector>
using namespace std;

vector<string> getSubsequences(string str)
{
    if (str == "")
    { 
        vector<string> output;
        output.push_back("");
        return output;
    }

    vector<string> output =  getSubsequences(str.substr(1));

    int size = output.size();
    for (int i = 0; i < size; i++)
        output.push_back(str[0] + output[i]);

    return output;
}

int main()
{
    string str = "abc";
    vector<string> result = getSubsequences(str);

    for (auto item: result)
        cout << item << endl;

    return 0;
}