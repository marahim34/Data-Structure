#include <iostream>
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
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void remove_duplicate(Node *head)
{
    if (head == NULL || head->next == NULL)
        return;

    Node *a, *b, *duplicate;
    a = head;

    while (a != NULL && a->next != NULL)
    {
        b = a;
        while (b->next != NULL)
        {
            if (a->val == b->next->val)
            {
                duplicate = b->next;
                b->next = b->next->next;
                delete duplicate;
            }
            else
            {
                b = b->next;
            }
        }
        a = a->next;
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    remove_duplicate(head);

    print_linked_list(head);

    return 0;
}
