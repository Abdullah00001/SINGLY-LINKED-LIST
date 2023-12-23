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
void addHead(Node *&head, int value)
{
    Node *addhead = new Node(value);
    addhead->next = head;
    head = addhead;
}
void addNodes(Node *&head, int value)
{

    Node *addNode = new Node(value);
    if(head==NULL){
        head=addNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = addNode;
}
int nodeSize(Node *head)
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
void dltHead(Node *&head)
{
    if (head == NULL)
        return;
    Node *dlthead = head;
    head = head->next;
    delete dlthead;
}
void dltNode(Node *head, int pos)
{
    if (head == NULL)
        return;
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *dltnode = tmp->next;
    tmp->next = tmp->next->next;
    delete dltnode;
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
    Node *head = NULL;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X;
        cin >> X;
        if (X == 0)
        {
            int V;
            cin >> V;
            addHead(head, V);
            prntNodes(head);
        }
        else if (X == 1)
        {
            int V;
            cin >> V;
            addNodes(head, V);
            prntNodes(head);
        }
        else if (X == 2)
        {
            int V;
            cin >> V;
            int sz = nodeSize(head);
            if (sz > V)
            {
                if (V == 0)
                {

                    dltHead(head);
                    prntNodes(head);
                }
                else
                {

                    dltNode(head, V);
                    prntNodes(head);
                }
            }
            else
            {
                prntNodes(head);
            }
                }
    }

    return 0;
}