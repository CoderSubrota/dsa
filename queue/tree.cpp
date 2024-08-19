#include <bits/stdc++.h>
using namespace std;
// একটা ক্লাস যেটা আমাদের একটা নোড এই নোডে আমরা ডেটা গুলো রেখেছি ।
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
//এইটা আমাদের পূর্ববর্তী নোড
void preValueOfTree(Node * root){
    if(root==NULL) return ;
    cout << root->val << " ";
    preValueOfTree(root->left) ;
    preValueOfTree(root->right) ;
}

//এইটা আমাদের পরবর্তী নোড
void postValueOfTree(Node * root){
    if(root==NULL) return ;
    postValueOfTree(root->left) ;
    postValueOfTree(root->right) ;
    cout << root->val << " ";

}
//এইটা আমাদের মধ্যবর্তী নোড

void inOrderValueOfTree(Node * root){
    if(root==NULL) return ;
    inOrderValueOfTree(root->left) ;
    cout << root->val << " ";
    inOrderValueOfTree(root->right) ;

}


int main()
{
// এই অংশে আমরা আমাদের নোডের মান গুলো ‍দিয়েছি ।
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    Node *g = new Node(70);

//নোডের সংযোগ করানো হয়েছে
    a->left = b;
    a->right = c;
    b->left = d;
    c->right = e; 
    e->left = f;
    e->right = g;
    //ফাংশনে আমরা নোডের মান গুলো দিয়েছি
    preValueOfTree(a) ;
    cout <<endl;
    postValueOfTree(a) ;
    cout <<endl;
    inOrderValueOfTree(a) ;
    return 0;
}