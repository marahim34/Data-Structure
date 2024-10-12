#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

bool is_palindrome(Node *head, Node *tail)
{
    if (head == NULL || tail == NULL)
        return true;

    Node *i = head;
    Node *j = tail;

    while (i != j && i->prev != j)
    {
        if (i->val != j->val)
            return false;
        i = i->next;
        j = j->prev;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    if (is_palindrome(head, tail))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}