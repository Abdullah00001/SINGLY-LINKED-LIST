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
void addNodes(Node *&head, int value)
{
    Node *addnode = new Node(value);
    if (head == NULL)
    {
        head = addnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = addnode;
}
void prntNodes(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void newNode(Node *head, int postn, int valu)
{
    Node *nwNode = new Node(valu);
    Node *tmp = head;
    for (int i = 1; i <= postn - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    nwNode->next = tmp->next;
    tmp->next = nwNode;
    prntNodes(head);
}
void addHead(Node *&head, int headValue)
{
    Node *newHead = new Node(headValue);
    newHead->next = head;
    head = newHead;
}

int main()
{
    Node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        addNodes(head, value);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            addHead(head, val);
            prntNodes(head);
        }
        else
        {
            newNode(head, pos, val);
        }
    }

    return 0;
}