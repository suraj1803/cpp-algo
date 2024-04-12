/*
    Design a data structure that supprts the following operations O(1) time

    1. insertMin(x) --> inserts a number if it is smallest among others
    2. insertMax(x) --> inserts a number if it is largest among others
    3. getMin()     --> returns the smallest number
    4. getMax()     --> returns the largest number
    5. extractMax() --> removes the smallest number
    6. extractMin() --> removes the smallest number
*/

#include <iostream>
#include <deque>
using namespace std;

class MyDS {
private:
    deque<int> d;

public:
    void insertMin(int x) {
        if (d.empty()) {
            d.push_front(x);
        }

        if (x >= d.front()) {
            return;
        }

        d.push_front(x);
    }

    void insertMax(int x) {
        if (d.empty()) {
            d.push_back(x);
        }

        if (x < d.back()) {
            return;
        }

        d.push_back(x);
    }

    int extractMin() {
        if (d.empty()) {
            return -1;
        }

        int item = getMin();
        d.pop_front();
        return item;
    }

    int extactMax() {
        if (d.empty()) {
            return -1;
        }

        int item = getMax();
        d.pop_back();
        return item;
    }

    int getMin() { return d.front(); }

    int getMax() { return d.back(); }
};

int main() {

    MyDS m;
    m.insertMin(3);
    m.insertMax(4);
    m.insertMax(2);

    cout << m.getMin() << " " << m.getMax() << endl;

    return 0;
}
