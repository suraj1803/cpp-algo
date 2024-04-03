#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> s;
    while(q.empty() == false)
    {
        s.push(q.front());
        q.pop();
    }

    while(s.empty() == false)
    {
        q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl;
    reverse(q);
    cout << q.front() << endl;
    
    return 0;
}

