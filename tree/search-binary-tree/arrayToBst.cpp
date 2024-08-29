#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* arrayToBST(vector<int>array, int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;

    Node* root = new Node();
    root->data = array[mid];
    root->left = arrayToBST(array, start, mid - 1);
    root->right = arrayToBST(array, mid + 1, end);

    return root;
}

void printBST(Node* root, string indent = "") {
    if (root == NULL) {
        return;
    }

    cout << indent << root->data << endl;
    printBST(root->left, indent + "  ");
    printBST(root->right, indent + "  ");
}

int main() {
    vector<int>arr ;
    arr.push_back(10) ;
        arr.push_back(20) ;
            arr.push_back(30) ;
                arr.push_back(30) ;
    int n =  arr.size() ;

    Node* root = arrayToBST(arr, 0, n - 1);

    cout << "Binary Search Tree:" << endl;
    printBST(root);

    return 0;
}