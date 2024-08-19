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
Node * head = NULL;
Node * tail = NULL;


    void push(int val)
    {
     Node * newNode = new Node(val); 
     //data type * nodeName = new (dynamic) data type (value) ;
     if(head==NULL){
        head = newNode ;
        head->prev = NULL;
        tail = newNode ;
     }else{
        tail->next = newNode;
        newNode->prev = tail ;
        tail = newNode ;
        tail->next = NULL;
     }
    }
    //
    void printList (){
        Node * temp = head ;

        while (temp!=NULL)
        {
            /* code */
            cout << temp->val << " " ;
            temp=temp->next ;
        }
        
    }
    //
    void top()
    {
        cout <<endl << "Top: " << head->val << endl;
    }
    //
    void back(){
     cout <<endl << "Back : " << tail->val << endl;
    }
    //
    void pop(){
        Node * dltNode = head ;
        head=head->next ;
        delete dltNode ;
    }
};
int main()
{
    // first in first out (Queue)
    linkedList ll;
    int val;
    while (cin >> val && val != -1)
    {
        ll.push(val);
    }

  ll.printList() ;
  ll.top() ;
  ll.back() ;
  ll.pop() ;
  ll.printList() ;
return 0;
}