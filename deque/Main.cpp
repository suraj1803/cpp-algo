#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq = {1, 2, 3, 4};
    dq.push_front(2);
    for (auto item : dq) 
    {
        cout << item << " ";
    }
    cout << endl;

    dq.pop_front();
    for (auto item : dq) 
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}

