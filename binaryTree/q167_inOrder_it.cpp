#include <iostream>
#include <stack>
#include "tree.hpp"
using namespace std;

void inOrder_it(Node *root)
{
    if (root == nullptr)
        return;
    stack<Node *> s;
    Node *curr = root;

    while (curr != nullptr || !s.empty())
    {
        while (curr != nullptr)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        cout << curr->data << ", ";
        s.pop();
        curr = curr->right;
    }
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 60);
    root = insert(root, 70);
    inOrder(root);
    cout << endl;
    inOrder_it(root);
}