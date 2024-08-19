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

class Node2
{
public:
    int val;
    Node2 *next;
    Node2 *prev;
    Node2(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class combineOfFunction
{
public:
    Node *head;
    Node *tail;
    //
    Node2 *head2;
    Node2 *tail2;

    combineOfFunction()
    {
        head = NULL;
        tail = NULL;

        head2 = NULL;
        tail2 = NULL;
    }
    // insert elements
    void insertElement(Node *&head, Node *&tail, int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            head->prev = NULL;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            tail->next = NULL;
        }
    }

    void insertElement2(Node2 *&head2, Node2 *&tail2, int val)
    {
        Node2 *newNode = new Node2(val);
        if (head2 == NULL)
        {
            head2 = newNode;
            head2->prev = NULL;
            tail2 = newNode;
        }
        else
        {
            tail2->next = newNode;
            newNode->prev = tail2;
            tail2 = newNode;
            tail2->next = NULL;
        }
    }
   //----------------> work will be here <---------------//
   
} ;
int main()
{
    combineOfFunction list;

    Node *head = NULL;
    Node *tail = NULL;
    //
    Node2 *head2 = NULL;
    Node2 *tail2 = NULL;
    // first insert
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        list.insertElement(head, tail, val);
    }

    // second insert
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        list.insertElement2(head2, tail2, val);
    }

    cout << endl
         << endl;
    while (head != NULL)
    {
        /* code */
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl
         << endl;
    while (head2 != NULL)
    {
        /* code */
        cout << head2->val << " ";
        head2 = head2->next;
    }
    cout << endl
         << ">>------------->> Check double linked list node <<-----------------<<" << endl;

      for(Node * i=head; i!=NULL; i=i->next) {
          for(Node2 * j=head2 ; j!=NULL; j=j->next) {
               if(i->val==j->val)  {
               }
           }
      }

    // if (result == 0)
    // {
    //     cout << "Not match any value";
    // }
    // else
    // {
    //     cout << "Value matched";
    // }
    return 0;
}