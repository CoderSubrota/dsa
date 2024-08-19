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

Node *head = NULL; // declare head as a global variable

void insertAtHead(int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
    }

      Node *temp = head;
        while (temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    
}

void deleteNode(int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->val == val)
    {
        Node *deleteElement = head;
        head = head->next;
        delete deleteElement;
        return;
    }
    // Node *temp = head;
    // while (temp->next!= NULL)
    // {
    //     if (temp->next->val == val)
    //     {
    //         Node *nodeToDelete = temp->next;
    //         temp->next = temp->next->next;
    //         delete nodeToDelete;
    //         return;
    //     }
    //     temp = temp->next;
    // }
}

void printList()
{
    Node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void performOperation(int x, int v)
{
    if (x == 0)
    {
        insertAtHead(v);
    }
    else if (x == 1)
    {
        insertAtTail(v);
    }
    else if (x == 2)
    {
        deleteNode(v);
    }
    else
    {
        return; // invalid index, do nothing
    }
}

int main()
{
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cout << "Enter operation (0: insert at head, 1: insert at tail, 2: delete): ";
        cin >> x;
        cout << "Enter value: ";
        cin >> v;
        performOperation(x, v);
        printList();
    }
    return 0;
}