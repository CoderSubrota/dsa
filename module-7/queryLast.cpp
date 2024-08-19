#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {

public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtHead(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteAtIndex(int index) {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        if (index == 0) {
            head = temp->next;
            delete temp;
            return;
        }
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
            if (temp == NULL) {
                return;
            }
        }
        if (temp->next == NULL) {
            return;
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int Q;
    cin >> Q;
    LinkedList linkedList;
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            linkedList.insertAtHead(V);
        } else if (X == 1) {
            linkedList.insertAtTail(V);
        } else if (X == 2) {
            linkedList.deleteAtIndex(V);
        }
        linkedList.printList();
    }
    return 0;
}