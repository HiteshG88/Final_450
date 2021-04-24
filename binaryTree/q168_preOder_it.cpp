#include <iostream>
#include <stack>
#include "tree.hpp"
using namespace std;

void preOrder_it(Node *root)
{
    if (root == nullptr)
        return;
    stack<Node *> s;
    Node *curr = root;
    s.push(curr);

    while (!s.empty())
    {
        curr = s.top();
        cout << curr->data << ", ";
        s.pop();
        if (curr->right)
            s.push(curr->right);
        if (curr->left)
            s.push(curr->left);
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
    preOrder(root);
    cout << endl;
    preOrder_it(root);
}