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

void print_forward(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

void insert_at_head(Node *&head, Node *tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void delete_position()
{
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->next = c;
    b->prev = a;
    c->prev = b;

    int pos, val;
    cin >> pos;

    cin >> val;

    if (pos == 0)
    {
        insert_at_head(head, val);
    }
    else if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == size(head))
    {
        insert_at_tail(tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }

    print_forward(head);
    print_backward(tail);
    return 0;
}