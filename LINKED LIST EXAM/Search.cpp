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
void findVal(Node *head, int valu)
{
    Node *tmp = head;
    int cnt = 0;
    bool flag = false;
    while (tmp != NULL)
    {
        if (tmp->val == valu)
        {
            flag = true;
            break;
        }
        cnt++;
        tmp = tmp->next;
    }
    if (flag)
        cout << cnt << endl;
    else
        cout << -1 << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL, *tail = NULL;
        int nodeVal;
        while (true)
        {
            cin >> nodeVal;
            if (nodeVal == -1)
                break;
            addNodes(head, tail, nodeVal);
        }
        int X;
        cin >> X;
        findVal(head, X);
    }
    return 0;
}