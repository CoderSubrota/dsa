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

class printLevelIsExist{
    public:
void printLevel(Node *root, int x)
 {
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        int size = q.size();
        if (level == x)
        {

            for (int i = 0; i < size; i++)
            {
                Node *pr = q.front();
                q.pop();
                cout << pr->val << " ";
            }
            return;
        }

        for (int i = 0; i < size; i++)
        {
            Node *pr = q.front();
            q.pop();
            if (pr->left)
            {
                q.push(pr->left);
            }
            if (pr->right)
            {
                q.push(pr->right);
            }
        }

        level++;
    }
    myFlag = false;
}

};


int main()
{
    printLevelIsExist  pl;

    Node *root = inputTree();
    int x;
    cin >> x;
    pl.printLevel(root, x);
    if (!myFlag)
    {
        cout << "Invalid" << endl;
    }

    return 0;
}