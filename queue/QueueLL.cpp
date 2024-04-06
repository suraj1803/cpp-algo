#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int x;
    Node *next;

    Node(int x)
    {
        this->x = x;
        next = NULL;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;
    int size;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enqueue(int x)
    {
        Node *node = new Node(x);
        if (isEmpty())
        {
            front = node;
            rear = node;
        }
        else
        {
            rear->next = node;
            rear = node;
        }
        size++;
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;
        
        int item = front->x; 

        if (getSize() == 1)
        {
            delete front;
            front = NULL;
            rear = NULL;

            size--;
            return item;
        }

        Node* node = front;
        front = front->next;
        delete node;

        size--;
        return item;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void print()
    {
        Node* node = front;
        while (node != NULL)
        {
            cout << node->x << " ";
            node = node->next;
        }
        cout << "\n";
    }
};

int main()
{
    Queue queue;
    queue.enqueue(1);
    queue.print();
    cout << queue.dequeue() << endl;
    queue.print();

    return 0;
}
