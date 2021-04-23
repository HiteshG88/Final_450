#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int _data)
    {
        data = _data;
        next = nullptr;
    }
};

node *insert(node **h_ref, int key)
{
    if (*h_ref == nullptr)
    {
        node *new_node = new node(key);
        return new_node;
    }
    node *new_node = new node(key);
    node *curr = *h_ref;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = new_node;
    return *h_ref;
}

void printList(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

node *reverseList(node **h_ref)
{
    node *prev = nullptr;
    node *curr = *h_ref;
    node *last = nullptr;
    while (curr != nullptr)
    {
        last = curr->next;
        curr->next = prev;
        prev = curr;
        curr = last;
    }
    return prev;
}

int main()
{
    node *head = nullptr;
    head = insert(&head, 10);
    head = insert(&head, 20);
    head = insert(&head, 30);
    head = insert(&head, 40);
    head = insert(&head, 50);
    printList(head);
    head = reverseList(&head);
    printList(head);
}