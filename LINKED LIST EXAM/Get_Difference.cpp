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
void dfrnce(Node *head)
{
    Node *tmp = head;
    int min = INT_MAX, max = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    int val = max - min;
    cout << val << endl;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        addNodes(head, tail, val);
    }
    dfrnce(head);
    return 0;
}