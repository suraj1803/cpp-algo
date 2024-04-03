#include <iostream>
using namespace std;

class MyStack {
private:
    int *arr;
    int capacity;
    int count;
public: 
    MyStack(int n) 
    {
        arr = new int[n];
        capacity = n;
        count= 0;
    }

    void push(int x) 
    {
        if (count== capacity) 
        {
            cout << "Stack OverFlow" << endl;
            return;
        }

        arr[count++] = x;
    }

    int pop() 
    {
        if (count == 0)
        {
            cout << "No elements in the stack" << endl;
            return -1;
        }

        return arr[count--];
    }

    int size() 
    {
        return count;
    }

    int peek() 
    {
        return arr[size() - 1];
    }
    
};

int main()
{
    MyStack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.size() << endl;
    cout << s.peek() << endl;

    s.pop();
    cout << s.size() << endl;
    cout << s.peek() << endl;

    return 0;
}
