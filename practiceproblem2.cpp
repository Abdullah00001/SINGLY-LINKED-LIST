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
void takeNodes(Node *&head, int value)
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
void isDuplicate(Node *head)
{
    Node *tmp = head;
    bool flag = false;
    // for (Node *i = tmp; i != NULL; i++)
    // {
    //     for (Node *j = ; i < count; i++)
    //     {
    //         /* code */
    //     }

    // }
    // for (Node *i = head; i != NULL; i = i->next)
    // {
    //     for (Node *j = i->next; j != NULL; j = j->next)
    //     {
    //         // eykhane value 2ti compare korben
    //     }
    // }
}
int main()
{
    Node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        takeNodes(head, value);
    }
    if (isDuplicate(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}