#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class linkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            head->prev = NULL;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            tail->next = NULL;
        }
    }
    //
    void pop()
    {
        Node *dltNode = tail;
        tail = tail->prev;
        delete dltNode;
    }
    //

    void top()
    {
        Node *temp = tail;
        cout << temp->val;
        cout << endl;
    }
    //
    void printRe()
    {
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->prev;
        }
    }
    //
    void back()
    {
        Node *temp = head;
        cout << endl;
        cout << temp->val;
        cout << endl;
    }
};

int main()
{
    linkedList ll;
    int val;
    while (cin >> val && val != -1)
    {
        /* code */
        ll.push(val);
    }
    ll.pop();

    ll.printRe();
    ll.top();
    ll.back();

    return 0;
}