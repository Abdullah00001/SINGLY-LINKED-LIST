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
int nodesSize(Node *head)
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
int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;
    int val1, val2;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        addNodes(head1, tail1, val1);
    }
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        addNodes(head2, tail2, val2);
    }
    int node1 = nodesSize(head1);
    int node2 = nodesSize(head2);
    if (node1 == node2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}