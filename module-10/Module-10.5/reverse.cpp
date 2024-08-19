#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node * next ;
    Node * prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL; 
    }
} ;
//
void insertElementToNode(Node *&head, Node*& tail, int value){
    Node * newNode = new Node(value) ;
    if(head==NULL){
        head=newNode;
        head->prev = NULL;
        tail = newNode ;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = NULL;
    }
}
void myRecurse(Node * head, Node * tail) {
 Node * i = head;
 Node * j = tail;
 while (i!=j && i->next!=j)
 {
   swap(i->val, j->val) ;
   i=i->next ;
   j=j->prev ; 
 }
 
}
int main() {
    Node * head = NULL ;
    Node * tail = NULL;

    while (1)
    {
     int value;
     cin >> value;
     if(value==-1){
        break;
     }
     insertElementToNode(head,tail,value) ;
    }
   myRecurse(head,tail) ;
   while (head!=NULL)
   {
    /* code */
    cout << head->val << " " ;
    head = head->next ;
   }
   
   return 0;
}