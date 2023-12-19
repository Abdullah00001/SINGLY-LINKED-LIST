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
void addDatas(Node *&head, int val)
{
    Node *dataNode = new Node(val);
    if (head == NULL)
    {
        head = dataNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = dataNode;
}
int cntNode(Node *head)
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
    int valu;
    while (true)
    {
        cin >> valu;
        if (valu == -1)
        {
            break;
        }
        addDatas(head, valu);
    }
    int cnt = cntNode(head);
    cout << cnt << endl;
    return 0;
}