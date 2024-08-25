#include <bits/stdc++.h>
using namespace std;

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

Node *inputTree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    Node *root = new Node(val);

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
bool myFlag = true;
void getLeafNodes(Node *root)
{
    if (root == NULL)
        return;

        if (root->left!=NULL && root->right == NULL || root->left==NULL && root->right != NULL )
        {
            myFlag = false;
        }
    
    getLeafNodes(root->left);
    getLeafNodes(root->right);
}

int main()
{
    Node *root = inputTree();
    getLeafNodes(root) ;
   if(myFlag) {
    cout << "YES" <<endl;
   }else{
    cout << "NO" <<endl;
   }
    return 0;
}