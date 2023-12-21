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
bool isSorted(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
        {
            return false;
        }
        tmp = tmp->next;
    }
    return true;
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
    if (isSorted(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}