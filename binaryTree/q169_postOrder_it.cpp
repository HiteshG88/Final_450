#include <iostream>
#include <stack>
#include "tree.hpp"
using namespace std;

void postOrder_it(Node *root)
{
    if (root == nullptr)
        return;
    stack<Node *> s1;
    stack<Node *> s2;
    Node *curr = root;
    s1.push(curr);

    while (!s1.empty())
    {
        curr = s1.top();
        s2.push(curr);
        s1.pop();
        if (curr->left)
            s1.push(curr->left);
        if (curr->right)
            s1.push(curr->right);
    }
    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
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
    postOrder(root);
    cout << endl;
    postOrder_it(root);
}