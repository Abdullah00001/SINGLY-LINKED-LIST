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
    if (head == NULL)
    {
        head = addNode;
        tail = addNode;
        return;
    }
    tail->next = addNode;
    tail = addNode;
}
void nodeSort(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
                swap(i->val, j->val);
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
    nodeSort(head);
    prntNodes(head);
    return 0;
}