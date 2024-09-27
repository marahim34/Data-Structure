#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

bool are_identical(Node *head1, Node *head2)
{
    Node *current1 = head1;
    Node *current2 = head2;

    bool identical = true;

    while (current1 != NULL && current2 != NULL)
    {
        if (current1->val != current2->val)
        {
            identical = false;
            break;
        }
        current1 = current1->next;
        current2 = current2->next;
    }

    if (current1 != NULL || current2 != NULL)
    {
        identical = false;
    }

    return identical;
}

int main()
{
    Node *head1 = NULL, *head2 = NULL;
    Node *tail1 = NULL, *tail2 = NULL;

    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }

    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }

    if (are_identical(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}