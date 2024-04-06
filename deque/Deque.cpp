#include <iostream>
using namespace std;

class Node {
public: 
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;
    int size;
public:
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void insertFront(int x)
    {
        Node *node = new Node(x);
        if (isEmpty())
        {
            front = node;
            rear = node;
        }
        else
        {
            node->next = front; 
            front = node;
        }
        size++;
    }

    void deleteFront()
    {
        if (isEmpty())
            return; 
        Node* node = front->next;
        delete front;
        front = node;
        size--;
    }

    void insertRear(int x) 
    {   
        Node* node = new Node(x);
        if (isEmpty())
        {
            front = node;
            rear = node;
        }

        rear->next = node;
        rear = node;
        size++;
    }

    void deleteRear()
    {
        if (isEmpty())
            return;
        if (getSize() == 1)
        {
            delete rear;
            front = rear = NULL;
        }
        
        Node* curr = front;
        while (curr->next != rear)
        {
            curr = curr->next;
        }
        
        delete curr->next;
        rear = curr;
        size--;
    }

    int getFront()
    {
        return front->val;
    }

    int getRear()
    {
        return rear->val;
    }

    bool isEmpty()
    {
        return getSize() == 0;
    }

    int getSize()
    {
        return size;
    }

};

int main()
{
    Queue q;
    q.insertFront(10);
    q.insertFront(20);
    q.insertRear(30);
    q.insertRear(40);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.deleteRear();
    q.deleteRear();
    cout << q.getFront() << " " << q.getRear() << endl;

    return 0;
}
