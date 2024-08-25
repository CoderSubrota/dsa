#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputTree() {
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    Node *root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *parent = q.front();
        q.pop();

        int left, right;
        cin >> left >> right;

        if (left != -1) {
            parent->left = new Node(left);
            q.push(parent->left);
        } else {
            parent->left = NULL;
        }

        if (right != -1) {
            parent->right = new Node(right);
            q.push(parent->right);
        } else {
            parent->right = NULL;
        }
    }

    return root;
}

void getLeafNodes(Node *root, vector<int> &leafNodes) {
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL) {
        leafNodes.push_back(root->val);
    }

    getLeafNodes(root->left, leafNodes);
    getLeafNodes(root->right, leafNodes);
}

void printLeafNodesInDescendingOrder(Node *root) {
    vector<int> leafNodes;
    getLeafNodes(root, leafNodes);
    
     int size = leafNodes.size() ;

    for(int i=0; i< size; i++){
          for(int j=0; j<size-i-1; j++){
              if(leafNodes[j] <  leafNodes[j+1]){
                 int temp = leafNodes[j] ;
                 leafNodes[j] = leafNodes[j+1] ;
                 leafNodes[j+1] = temp ;
              }
          }
    }
    
    for (int val : leafNodes) {
        cout << val << " ";
    }
}

int main() {
    Node *root = inputTree();
    printLeafNodesInDescendingOrder(root);
    return 0;
}