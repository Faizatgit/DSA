#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root)
{
    Node *cur = root;
    while (cur != NULL)
    {
        if (cur->left == NULL)
        {
            cout << cur->data << " ";
            cur = cur->right;
        }
        else
        {
            Node *prev = cur->left;
            while (prev->right && prev->right != cur)
            {
                prev = prev->right;
            }
            if (prev->right == NULL)
            {
                prev->right = cur;
                cur = cur->left;
            }
            else
            {
                prev->right = NULL;
                cout << cur->data << " ";
                cur = cur->right;
            }
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);

    inorder(root);

    return 0;
}