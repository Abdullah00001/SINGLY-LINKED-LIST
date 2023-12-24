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
void addNodes(Node *&head, Node *&tail, int value)
{
    Node *addNode = new Node(value);
    if (tail == NULL)
    {
        head = addNode;
        tail = addNode;
        return;
    }
    tail->next = addNode;
    tail = addNode;
}
void dltDuplicate(Node *&head)
{
    Node *tmp = head;
    for (Node *i = tmp; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (i->val == j->next->val)
            {
                Node *dltNode = j->next;
                j->next = j->next->next;
                delete dltNode;
            }
            else
            {
                j = j->next;
            }
        }
    }
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
int main()
{
    Node *head = NULL, *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        addNodes(head, tail, value);
    }
    dltDuplicate(head);
    prntNodes(head);
    return 0;
}