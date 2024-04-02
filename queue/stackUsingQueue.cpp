#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q1, q2;
public:
    int getTop()
    {
        return q1.front();
    }

    int getSize()
    {
        return q1.size();
    }

    int pop()
    {
        int item = q1.front();
        q1.pop();
        return item;
    }

    void push(int x)
    {
        while(q1.empty() == false)
        {
            int item = q1.front();
            q1.pop();
            q2.push(item);
        }

        q1.push(x);

        while (q2.empty() == false)
        {
            int item = q2.front();
            q2.pop();
            q1.push(item);
        }
    }

    bool isEmpty()
    {
        return q1.
    }
};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    cout << stack.pop() << endl;
    return 0;
}