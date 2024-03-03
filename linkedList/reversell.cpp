#include <iostream>
using namespace std;


class Node
{
public:
    int x;
    Node *next;

    Node(int x)
    {
        this->x = x;
        this->next = NULL;
    }
};

Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node* prev = head;
    Node* curr = head->next;
    while (curr != NULL)
    {
        Node* nextNode = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextNode;
    }

    head->next = NULL;
    return prev;
}

Node* reverseLinkedListRecursive(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node* res_head = reverseLinkedListRecursive(head->next);
    Node* afterHead = head->next;
    afterHead->next = head;
    head->next = NULL;
    return res_head;
}

void printList(Node* head)
{
    Node* node = head;
    while (node != NULL)
    {
        cout << node->x << " ";
        node = node->next;
    }
    cout << "\n";
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    printList(head);
    head = reverseLinkedListRecursive(head);
    printList(head);
    return 0;
}