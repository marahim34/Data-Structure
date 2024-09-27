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

int search(Node *head, int x)
{
    Node *current = head;
    int index = 0;
    while (current != NULL)
    {
        if (current->val == x)
        {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }

        int x;
        cin >> x;

        int result = search(head, x);
        cout << result << endl;
    }
    return 0;
}
