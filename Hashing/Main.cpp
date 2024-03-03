#include <iostream>
#include <list>
using namespace std;

class MyHash
{
public:
    int BUCKET;
    list<int> *table;


    MyHash(int b)
    {
        this->BUCKET = b;
        table = new list<int>[b];

    }

    void insertKey(int key)
    {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key)
    {
        int index = hashFunction(key);
        for (auto item: table[index])
            if (item == key)
                return true;

        return false;
    }

    void remove(int key)
    {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    int hashFunction(int key)
    {
        return key % BUCKET;
    }
};

int main()
{
    MyHash hash(7);
    hash.insertKey(50);
    hash.insertKey(15);
    hash.insertKey(22);

    for (auto items: hash.table[1])
        cout << items << endl;

    hash.remove(15);
    for (auto items: hash.table[1])
        cout << items << endl;

    return 0;
}