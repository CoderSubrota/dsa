#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputTree()
{
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    Node *root = new Node(data);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int left, right;
        cin >> left >> right;

        if (left != -1)
        {
            parent->left = new Node(left);
            q.push(parent->left);
        }
        else
        {
            parent->left = NULL;
        }

        if (right != -1)
        {
            parent->right = new Node(right);
            q.push(parent->right);
        }
        else
        {
            parent->right = NULL;
        }
    }

    return root;
}

class myClass{
    public:
    void printOuterNode(Node* root) {
  if (root == NULL) return;

  queue<Node*> q, q2 ;

  q.push(root);

  while (!q.empty()) {
    int size = q.size();
    for (int i = 0; i < size; i++) {
      Node* node = q.front();
      q.pop();

   

      if (node->left != NULL) {
        q.push(node->left);
      }
         if (i == 0) {
        q2.push(node);
      }
      if (node->right != NULL) {
        q.push(node->right);
      }
    }
  }

  while (!s.empty()) {
    Node* node = q2.front();
    q2.pop();
    cout << node->data << " ";
  }

  cout << endl;
}
};

int main() {
    // Example usage
    myClass mycl;
    Node * root = inputTree() ;
    mycl.printOuterNode(root); // Expected Output: 1 2 4 7 3

    return 0;
}
