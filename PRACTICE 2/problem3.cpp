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
int sizeNode(Node *head)
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
void mdlNode(Node *head, int nodeSize)
{
    Node *tmp = head;
    if (nodeSize % 2 != 0)
    {
        for (int i = 0; i < nodeSize / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val<< endl;
    }
    else
    {
        for (int i = 0; i < (nodeSize / 2)-1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
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
    int nodeSize = sizeNode(head);
    mdlNode(head,nodeSize);

    return 0;
}