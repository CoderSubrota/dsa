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

// print value

void printValue(Node *&head)
{
    cout << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// insertAtHead
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
// insertAtTail
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *tail = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
// deletevalue
void deletevalue(Node *&head, int val)
{
    if(head==NULL || head->next== NULL){
    return ;
    }
    bool flag = false ;
    for (Node *j = head; j != NULL; j = j->next)
    {
        if (head->val == val)
        {
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
            flag =true ;
            break;
        }
    }
    if(flag){
        cout << "Deleted" ;
    }
}
int main()
{
    cout << "Enter your queries : ";
    int qu;
    cin >> qu;

    for (int i = 1; i <= qu; i++)
    {
        Node *head = NULL;
        cout << "Enter your option : ";
        int x;
        cin >> x;
        cout << "Enter your value : ";
        int val;
        cin >> val;
        if (x == 0)
        {
            insertAtHead(head, val);
        }
        else if (x == 1)
        {
            insertAtTail(head, val);
        }
        else if (x == 2)
        {
            deletevalue(head, val);
        }

        printValue(head);
    }

    return 0;
}