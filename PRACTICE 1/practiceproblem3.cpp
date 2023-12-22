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
    Node *addNode = new Node(value);
    if (head == NULL)
    {
        head = addNode;
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
int main()
{
    Node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        addNodes(head, value);
    }
    Node *tmp = head;
    int siZe = nodeSize(head);
    if (siZe % 2 != 0)
    {
        for (int i = 0; i < siZe / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
    else
    {
        for (int i = 0; i < (siZe / 2) - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }

    return 0;
}