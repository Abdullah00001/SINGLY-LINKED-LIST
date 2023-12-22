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
void maxVal(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }

        tmp = tmp->next;
    }
    cout << max << endl;
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
    maxVal(head);
    return 0;
}