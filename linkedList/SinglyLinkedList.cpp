#include <iostream>
using namespace std;

class Node
{
public:
    int x;
    Node* next;

    Node(int x)
    {
        this->x = x;
        next = NULL;
    }
};

// iterative
void printList(Node* head)
{
    while (head != NULL)
    {
        cout << head->x << " ";
        head = head->next;
    }
    cout << "\n";
}

// recursive
// void printList(Node* head)
// {
//     if (head == NULL)
//         return;
//     cout << head->x << "\n";
//     printList(head->next);
// }

Node* insertAtBegin(Node* head, int x)
{
    Node* newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

Node* insertAtEnd(Node* head, int x)
{

    Node* newNode = new Node(x);
    if (head == NULL)
    {
        return newNode;
    }

    Node* node = head;
    while (node->next != NULL)
    {
        node = node->next;
    }

    node->next = newNode;

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

Node* delHead(Node *head) 
{
    if (head == NULL)
        return head;
    
    Node* node = head->next;
    delete head;
    return node;
}

Node* delTail(Node* head) 
{
    if (head == NULL)
        return head;
    
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return head;
    }
    
    Node *node = head;
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
    Node *node = head;
    int i = 1;
    while (node != NULL)
    {
        if (node->x == x)
            return i;
        
        node = node->next;
        i++;
    }
    return -1;
}

int searchRecursive(Node *head, int x)
{
    if (head == NULL)
        return -1;
    
    if (head->x == x)
        return 1;
    else 
    {
        int res = searchRecursive(head->next, x);
        if (res == -1)
            return res;
        else
            return res + 1;
    }
}

int main()
{
    Node* head = NULL;


    head = insertAtBegin(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);

    printList(head);

    cout << searchRecursive(head, 20) << endl;


    return 0;
}