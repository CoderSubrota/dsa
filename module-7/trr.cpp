#include <iostream>

using namespace std;

class Node1 {
public:
    int val;
    Node1* next;

  Node1(int val){
    this->val = val;
    this->next =  NULL;
  }
};

class Node2 {
public:
    int val;
    Node2* next;
    
    Node2(int val){
    this->val = val;
    this->next =  NULL;
  }
};

void createNodeList1(Node1 * &head) {
    Node1* tail = NULL;

    int val;
    cout << "Enter values for Node1 list (enter -1 to terminate): ";
    cin >> val;

    while (val != -1) {
        Node1* newNode = new Node1(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> val;
    }

}

void createNodeList2(Node2 * &head) {
    Node2 * tail = NULL;

    int val;
    cout << "Enter values for Node2 list (enter -1 to terminate): ";
    cin >> val;

    while (val != -1) {
        Node2* newNode = new Node2(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> val;
    }

}

bool areNodesSame(Node1* node1, Node2* node2) {
    while (node1 != NULL && node2 != NULL) {
        if (node1->val != node2->val) {
            return false;
        }
        node1 = node1->next;
        node2 = node2->next;
    }
 // If one list is longer than the other, they are not the same
    if (node1 != NULL || node2 != NULL) {
        return false;
    }
   return true ;
}

int main() {
    Node1* head1 = NULL;
    Node2* head2 = NULL;

    createNodeList1(head1);

    createNodeList2(head2);

    if (areNodesSame(head1, head2)) {
        cout << "Nodes are the same" << endl;
    } else {
        cout << "Nodes are not the same" << endl;
    }

    return 0;
}