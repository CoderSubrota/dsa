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
        {
            q.push(parent->left);
        }
        if (parent->right)
        {
            q.push(parent->right);
        }
    }

    return root;
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

void insertNode(Node * & root, int newVal, int parentVal, char pos)
{
 if(root==NULL) return ;
 if(parentVal==root->val){
    Node * newNode = new Node(newVal) ;
   if(pos == 'L') root->left = newNode;
   else root->right = newNode; 
 }

 insertNode(root->left, newVal, parentVal, pos);
 insertNode(root->right, newVal, parentVal, pos);
}

int main()
{
    Node *root = inputTree();

    levelorder(root);

    int choice;
    while (true)
    {
        cout << endl
             << "1. Insert new value" << endl;
        cout << "2. Exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            int newVal, parentVal;
            char pos;

            cout << "\nEnter the parent value and position (L/R) to insert new node: ";
            cin >> parentVal >> pos;
            cout << "Enter the new value: ";
            cin >> newVal;

            insertNode(root, newVal, parentVal, pos);

            cout << "\nUpdated tree: ";
            levelorder(root);
        }
        else if (choice == 2)
        {
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}