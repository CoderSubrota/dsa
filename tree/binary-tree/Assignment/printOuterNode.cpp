#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

  Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void printLeftBoundary(Node* node, stack<int>& st) {
    if (node == NULL) {
        return;
    }
    st.push(node->val);
    if (node->left != NULL) {
        printLeftBoundary(node->left, st);
    } else if (node->right != NULL) {
        printLeftBoundary(node->right, st);
    }
}

void printRightBoundary(Node* node, queue<int>& qu) {
    if (node == NULL) {
        return;
    }
   qu.push(node->val);
    if (node->right != NULL) {
        printRightBoundary(node->right, qu);
    } else if (node->left != NULL) {
        printRightBoundary(node->left, qu);
    }
}


void printOuterNodes(Node* root) {
    if (root == NULL) {
        return;
    }
   stack<int>st ;
   queue<int> qu ;


    printLeftBoundary(root->left, st);

    printRightBoundary(root->right, qu);

    while (!st.empty())
    {
       cout << st.top() << " " ;
       st.pop() ;
    }
    
    cout << root->val << " " ;

      while (!qu.empty())
    {
       cout << qu.front() << " " ;
       qu.pop() ;
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printOuterNodes(root);  // Output: 2 4
   
    
    return 0;
}