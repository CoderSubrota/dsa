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
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        int left, right;
        cin >> left >> right;

        Node *leftNode;
        Node *rightNode;

        if (left == -1)
            leftNode = NULL;
        else
            leftNode = new Node(left);

        if (right == -1)
            rightNode = NULL;
        else
            rightNode = new Node(right);

        parent->left = leftNode;
        parent->right = rightNode;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);

        return root;
    }
}
void levelorder(Node *root)
{
    if (root == NULL)
    {
        cout << "Root is null!!" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        cout << parent->val << " ";

        if (parent->left)
        {
            q.push(parent->left);
        }
        if (parent->right)
        {
            q.push(parent->right);
        }
    }
}
//
bool univalueCheck(Node *root)
{
    bool myFlag = true ;
    if (root == NULL)
        return false;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        Node *pr = q.front();
        q.pop();

        if (pr->left)
            q.push(pr->left);
        if (pr->right)
            q.push(pr->right);

        if (pr->val != root->val)
           myFlag=false ;
    }
    return myFlag;
}

int main()
{
    Node *root = inputTree();

    levelorder(root);
    if (univalueCheck(root))
        cout << "True";
    else
        cout << "False";
    return 0;
}