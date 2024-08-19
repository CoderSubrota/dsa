#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class linkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void insert(int v)
    {
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    bool isPalindrome()
    {
       Node * start = head;
       Node * end = tail;
       while (start!=end && start->prev !=end){//indexes
            if( start->data != end->data){//values
                return false;
            }
            start  = start->next ;//i++
            end = end->prev ;//j++
       }
       return true ;
    }
};

int main()
{
    linkedList ll;
    int v;

    while (cin >> v && v != -1)
    {
        ll.insert(v);
    }
    if (ll.isPalindrome())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}