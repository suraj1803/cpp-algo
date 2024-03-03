#include <iostream>
using namespace std;

class Node {
public:
    int x;
    Node* next;

    Node(int x) 
    {
        this->x = x;
        next = NULL;
    }
};

class MyStack {
private:
    Node* top;
    int count;

public:
    MyStack() 
    {
        top = NULL;
        count = 0;
    }

    void push(int x) 
    {
        Node* node = new Node(x);
        if (top == NULL) 
        {
            top = node;
        }
        else 
        {
            Node* temp = top;
            node->next = top;
            top = node;
        }

        count++;
    }

    int pop()
    {
        if (size() == 0)
        {
            cout << "No elements in the stack" << endl;
            return -1;
        }
        Node* node = top->next;
        int value = top->x;

        delete top;
        top = node;

        count--;

        return value;
    }


    int peek() 
    {
        return top->x;
    }

    int size() 
    {
        return count;
    }
};

int main()
{
    MyStack s;    
    s.push(1);
    s.push(2);
    s.push(4);
    cout << s.size() << endl;
    cout << s.peek() << endl;

    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;

    return 0;
}