#include <iostream>
#include <vector>
#include "tree.hpp"
using namespace std;

vector<int> levelOrder(Node *root)
{
    //Your code here
    vector<int> v;
    if (root == nullptr)
    {
        return v;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        v.push_back(curr->data);
        // cout << curr->data << ",";
        q.pop();

        if (curr->left)
        {
            q.push(curr->left);
        }
        if (curr->right)
        {
            q.push(curr->right);
        }
    }
    return v;
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
    vector<int> v = levelOrder(root);
}