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
void cycleDetec(Node * head)
{
    Node *fast = head;
    Node *slow = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break; 
        }
      }
      if (flag==true)
       {
        cout << "Cycle detected !!";
        }
    else
    {
        cout << "Cycle not detected";
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(50);
    Node *c = new Node(40);
    Node *d = new Node(44);

    // Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d ;
    d->next =  d; 

    cycleDetec(head);

     cout << endl ;


    return 0;
}