#include <iostream>
using namespace std;

class Node {
public: 
    int x;
    Node *next;

    Node(int x) 
    {
        this->x = x; 
        this->next = NULL;
    }
};

void print(Node* head)
{
    Node *node = head;
    while (node != NULL)
    {
        cout << node->x << " ";
        node = node->next;
    }

    cout << "\n";
}

Node* insertAtBegin(Node* head, int x)
{
    Node* node = new Node(x);
    node->next = head;
    return node;
}

Node* insertAtEnd(Node* head, int x)
{
    Node *node = new Node(x);
    if (head == NULL)
    {
        return node;
    }

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = node;
    return head;
}

Node* insertAtPos(Node* head, int pos, int x)
{
    Node* node = new Node(x);

    if (pos == 1)
    {
        node->next = head;
        return node;
    }

    Node* curr = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        curr = curr->next;

        if (curr == NULL)
        {
            return head;
        }
    }

    node->next = curr->next;
    curr->next = node;

    return head;
}

Node* delHead(Node* head)
{
    if (head == NULL)
        return head;
    Node* node = head;
    head = node->next;
    delete node;
    return head;
}

Node* delTail(Node* head) 
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node* node = head; 
    while (node->next->next != NULL)
    {
        node = node->next;
    }

    delete node->next;

    node->next = NULL;

    return head;
}

int search(Node* head, int x)  
{
    int i = 1;
    Node* node = head;

    while (node != NULL)
    {
        if (node->x == x)
            return i;

        node = node->next;
        i++;
    }

    return -1;
}

int searchRecursive(Node* head, int x)
{
    if (head == NULL)
        return -1;

    if (head->x == x)
        return 1;
    else 
    {
        int index = searchRecursive(head->next, x);
        return index + 1;
    }
}

int main()
{
    Node* head = NULL;
    head = delTail(head);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    print(head);

    cout << search(head, 20) << endl;
    cout << search(head, 20) << endl;

    return 0;
}
