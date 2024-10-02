#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

int root_depth(Node *root)
{
    int d = 0;

    while (root != NULL)
    {
        d++;
        root = root->left;
    }
    return d;
}

bool isPerfect(Node *root, int d, int level)
{
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
    {
        return d == level + 1;
    }
    if (root->left == NULL || root->right == NULL)
    {
        return false;
    }

    return isPerfect(root->left, d, level + 1) && isPerfect(root->right, d, level + 1);
}

int main()
{

    Node *root = input_tree();

    int d = root_depth(root);

    bool perfect = isPerfect(root, d, 0);

    if (perfect)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}