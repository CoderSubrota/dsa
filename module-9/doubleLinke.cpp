#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int val;
    Node * next;
    Node * prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
    }
};

int main() {
  Node * head = new Node(10) ;
  Node * a = new Node(20);
  Node * b = new Node(30) ;
  Node * c = new Node(40) ;
  Node * d = new Node (50) ;
  Node * tail = d ;
 //
  head->next = a;
  a->prev = head;
  a->next =  b;
  b->prev = a ;
  b->next = c ;
  c->prev = b;
  c->next = d;
  d->prev = c ;

  //
 Node * temp =  head ;
 while (temp!=NULL)
 {
    cout << temp->val << " " ;
    temp = temp->next ;
 }
 
Node * temp2 = tail ;

 cout << endl; 
 while (temp2!=NULL)
 {
   cout << temp2->val << " ";
   temp2 = temp2->prev ;
 }

return 0;
}