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

    void getLeaves(Node* node, vector<int>& leaves) {
        if (!node) return;
        if (!node->left && !node->right) leaves.push_back(node->val);
        getLeaves(node->left, leaves);
        getLeaves(node->right, leaves);
    }

    bool leafSimilar(Node* root1, Node* root2) {
        vector<int> leaves1, leaves2;
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        return leaves1 == leaves2;
    }

int main()
{
    Node *root = inputTree();

    levelorder(root);
    if (leafSimilar(root,root))
        cout << "True";
    else
        cout << "False";
    return 0;
}