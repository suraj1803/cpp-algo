#include <iostream>
using namespace std;

/*
    enqueue(x) -> adds x to the end
    dequeue() -> remove item from the start
    size() -> returns no of items in queue
    getFront() -> returns the front element 
    getRear() -> returns the last element
    isFull() -> returns whether the queue is full or not
    isEmpty() -> returns whether the queue is empty or not
*/

class Queue {
private:
    int *arr;    
    int capacity;
    int count;
    int front;

public:
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        count = 0;
        front = -1;
    }

    void enqueue(int x) {
        if (count >= capacity) 
        {
            cout << "[ERROR] : Queue is Full" << endl;
            return;
        }

        if (front == -1)
            front++;

        arr[count++] = x;
    }

    int dequeue() {
        if (count == 0)
        {
            cout << "[ERROR] : Queue is Empty" << endl;
            return -1;
        }

        int item = arr[front];
        front++;
        return item;
    }

    void print() {
        for (int i = front; i < count; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {

    Queue myQueue(5);
    myQueue.enqueue(1);
    cout << myQueue.dequeue() << endl;
    myQueue.print();

    myQueue.enqueue(4);
    myQueue.print();
    return 0;
}