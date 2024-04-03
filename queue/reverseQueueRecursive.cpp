#include <iostream>
#include <queue>
using namespace std;

void reverse(queue<int> &q)
{
    if (q.empty())
        return;

    int firstItem = q.front();
    q.pop();

    reverse(q);

    q.push(firstItem);
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl;
    cout << q.back() << endl;
    reverse(q);
    cout << q.front() << endl;
    cout << q.back() << endl;
    
    return 0;
}
