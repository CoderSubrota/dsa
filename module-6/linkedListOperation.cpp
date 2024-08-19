#include <bits/stdc++.h>
using namespace std;
 class Node {
    public:
    int val;
    Node * next ;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
 };


int main() {

Node * head = new Node(10);
Node * b = new Node(20);
Node * c = new Node(30);
Node * d = new Node(40);
Node * e = new Node(50);

head->next = b;
b->next = c;
c->next = d ;
d->next = e;

cout << head->val << endl ;
cout << head->next->val << endl;
cout << head->next->next->val << endl;
cout << head->next->next->next->val << endl;
cout << head->next->next->next->next->val << endl;


   return 0;
}