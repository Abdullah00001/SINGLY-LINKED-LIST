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
int nodeSize(Node *i)
{
    Node *tmp = i;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void cmprNode(Node *n, Node *m)
{
    Node *tmp = n, *tmp1 = m;
    bool flag = true;
    while (tmp != NULL && tmp1 != NULL)
    {
        if (tmp->val != tmp1->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL, *head1 = NULL, *tail1 = NULL;
    int node1Val, node2Val;
    while (true)
    {
        cin >> node1Val;
        if (node1Val == -1)
            break;
        addNodes(head, tail, node1Val);
    }
    while (true)
    {
        cin >> node2Val;
        if (node2Val == -1)
            break;
        addNodes(head1, tail1, node2Val);
    }
    int node1 = nodeSize(head), node2 = nodeSize(head1);
    if (node1 == node2)
        cmprNode(head, head1);
    else
        cout << "NO" << endl;
    return 0;
}