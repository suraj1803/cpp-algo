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

        if (front == -1)
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = item;
        size++;
    }

    // removing elements front the front
    int dequeue() 
    {
        if (size == 0)
            return -1;
        int item = arr[front];
        if (size == 1)
        {
            front = -1;
            rear = -1;
            size = 0;
            return item;
        }
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

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
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

    return 0;
}