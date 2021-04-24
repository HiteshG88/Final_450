#pragma once
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *right, *left;
    Node(int _data)
    {
        data = _data;
        right = left = nullptr;
    }
};

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp->left != NULL)
            q.push(temp->left);
        else
        {
            temp->left = new Node(data);
            return root;
        }

        if (temp->right != NULL)
            q.push(temp->right);
        else
        {
            temp->right = new Node(data);
            return root;
        }
    }
    return root;
}

void inOrder(Node *root)
{
    if (root == nullptr)
        return;
    inOrder(root->left);
    cout << root->data << ", ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << ", ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << ", ";
}

void levelOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        cout << curr->data << ", ";
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
    return;
}
