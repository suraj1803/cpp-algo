/*
    enqueue() -> adds x to the end
    dequeue() -> remove item from the start
    size() -> returns no of items in queue
    getFront() -> returns the front element 
    getRear() -> returns the last element
    isFull() -> returns whether the queue is full or not
    isEmpty() -> returns whether the queue is empty or not
*/

#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
public:
    int size;
    Queue(int n) 
    {
        arr = new int[n];
        capacity = n;
        size = 0;
        front = -1;
        rear = -1;
    }

    // adding element the end(enqueue)
    void enqueue(int item) 
    {
        if (size == capacity)
            return;
        arr[size++] = item;
        if (front == -1)
            front = 0;
        rear = (rear + 1) % capacity;
        size++;
    }

    // removing elements front the front
    int dequeue() 
    {
        if (size == 0)
            return -1;
        if (size == 1)
            rear = (rear + 1) % capacity;
        int item = arr[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    int getFront() 
    {
        return front;
    }

    int getRear()
    {
        return rear;
    }

    void print()
    {
        if (front > rear) 
        {
            for (int i = front; i <= capacity; i++)
                cout << arr[i] << " ";
            
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else 
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }

        cout << "\n";
    }

};

int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(2);
    cout << q.size << endl;
    q.print();

    return 0;
}