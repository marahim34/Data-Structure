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

Node *head = NULL;
Node *tail = NULL;

void insert_at_head(int val)
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
        head = newNode;
    }
}

void insert_at_tail(int val)
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

void delete_index(int index)
{
    if (head == NULL)
    {
        return;
    }

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;

        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *current = head;
    Node *previous = NULL;
    int current_index = 0;

    while (current != NULL && current_index < index)
    {
        previous = current;
        current = current->next;
        current_index++;
    }

    if (current == NULL)
    {
        return;
    }

    previous->next = current->next;
    if (current == tail)
    {
        tail = previous;
    }

    delete current;
}

void printList()
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(v);
        }
        else if (x == 1)
        {
            insert_at_tail(v);
        }
        else if (x == 2)
        {
            delete_index(v);
        }

        printList();
    }
    return 0;
}
