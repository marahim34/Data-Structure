#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
    Node *prev;
    Node(string data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, Node *&current, string url)
{
    Node *newNode = new Node(url);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        current = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void visit(Node *head, Node *&current, string url)
{
    Node *temp = head;
    while (temp != NULL && temp->data != url)
    {
        temp = temp->next;
    }
    if (temp != NULL)
    {
        current = temp;
        cout << url << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void next(Node *&current)
{
    if (current != NULL && current->next != NULL)
    {
        current = current->next;
        cout << current->data << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&current)
{
    if (current != NULL && current->prev != NULL)
    {
        current = current->prev;
        cout << current->data << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *current = NULL;

    string data;
    while (cin >> data && data != "end")
    {
        insert_at_tail(head, tail, current, data);
    }

    int q;
    cin >> q;
    cin.ignore();

    string command;
    for (int i = 0; i < q; ++i)
    {
        getline(cin, command);
        if (command.substr(0, 6) == "visit ")
        {
            string address = command.substr(6);
            visit(head, current, address);
        }
        else if (command == "next")
        {
            next(current);
        }
        else if (command == "prev")
        {
            prev(current);
        }
    }

    return 0;
}
