#include <iostream>
#include <memory>
using namespace std;

class Node {
public:
    int x;    
    Node* prev;
    
    Node* next;
    Node (int x) 
    {
        this->x = x;
        prev = NULL;
        next = NULL;
    }
};

Node* insertAtBegin(Node* head, int x)
{
    Node* node = new Node(x);
    if (head == NULL)
        return node;
    node->next = head;
    head->prev = node;
    return node;
}

Node* insertAtEnd(Node* head, int x)
{
    Node* node = new Node(x);

    if (head == NULL)
    {
        return node;
    }
    
    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = node;
    node->prev = curr;

    return head;
}

Node* insertAtPos(Node* head, int pos, int x)
{
    Node* node = new Node(x);
    if (head == NULL)
        return node;
    if (pos == 1)
    {
        node->next = head;
        head->prev = node;
        return node;
    }

    Node* curr = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        curr = curr->next; 
        if (curr == NULL)
            return head;
    }

    node->next = curr->next;

    if (curr->next != NULL)
        curr->next->prev = node;

    curr->next = node;
    node->prev = curr;

    return head;
}

Node* delHead(Node* head)
{
    if (head == NULL)
        return head;
    Node* node = head->next;
    node->prev = NULL;
    delete head;

    return node;
}

Node* delTail(Node* head)
{
    if (head == NULL)
        return head;

    if (head->next == NULL)
        return NULL;
    Node* node = head;
    while (node->next != NULL)
    {
        node = node->next;
    }

    node->prev->next = NULL;

    delete node;
    return head; 
}

Node* reverse(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node* node = head; 

    while (node != NULL)
    {
        Node* temp = node->next;
        node->next = node->prev;
        node->prev = temp;

        if (node->prev != NULL)
            head = node->prev;

        node = node->prev;
    }
    return head;
}

void print(Node* head)
{
    Node* node = head;
    while(node != NULL)
    {
        cout << node->x << " ";
        node = node->next;
    }
    cout << "\n";
}

int main()
{
    Node* head = NULL;
    head = insertAtBegin(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    print(head);

    head = reverse(head) ;
    print(head);
    return 0;
}