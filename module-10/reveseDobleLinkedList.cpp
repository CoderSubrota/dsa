#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node * next ;
    Node * prev ;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL ;
    }
} ;

void reverseList(Node * head2, Node * tail2){
    Node * i = head2;
    Node * j = tail2 ;
     while (i!=j && i->next!=j)//i!=j and i->next != j 
     {
       swap(i->val,j->val) ;
       i = i->next ;
       j=j->prev ;
     }
     
}
int main() {


   Node * head = new Node(10) ; 
   Node * a = new Node(20) ; 
   Node * b = new Node(50) ; 
   Node * c = new Node(40) ; 
   Node * tail = c ;

   head->next = a;
   a->prev = head;
   a->next = b;
   b->prev = a; 
   b->next = c;
   c->prev = b;

  reverseList(head,tail) ;

   while (head!=NULL)
   {
    /* code */
    cout << head->val << " " ;
    head=head->next ;
   }
   
   return 0;
}