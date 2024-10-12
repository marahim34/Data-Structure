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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

bool insert_at_position(Node *&head, Node *&tail, int val, int pos)
{
    if (pos == 0)
    {
        insert_at_head(head, tail, val);
        return true;
    }

    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i < pos; i++)
    {
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return false;
        }
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Invalid" << endl;
        return false;
    }

    newNode->next = tmp->next;
    if (tmp->next != NULL)
    {
        tmp->next->prev = newNode;
    }
    else
    {
        tail = newNode;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
    return true;
}

void print_list_left_to_right(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_list_right_to_left(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;

    int pos, val;
    while (t--)
    {
        cin >> pos >> val;

        if (pos == 0)
        {
            insert_at_head(head, tail, val);
        }
        else
        {
            if (!insert_at_position(head, tail, val, pos))
            {
                continue;
            }
        }

        print_list_left_to_right(head);
        print_list_right_to_left(tail);
    }

    return 0;
}
