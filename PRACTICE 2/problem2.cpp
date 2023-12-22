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
    Node *addnode = new Node(value);
    if (head == NULL)
    {
        head = addnode;
        tail = addnode;
        return;
    }
    tail->next = addnode;
    tail = addnode;
}
void reversNode(Node *head)
{
    if (head == NULL)
        return;
    reversNode(head->next);
    cout << head->val << " ";
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
    reversNode(head);
    cout << endl;
    return 0;
}