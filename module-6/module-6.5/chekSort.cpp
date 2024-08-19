#include <iostream>

using namespace std;

// Define the node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to check if the linked list is sorted in ascending order
bool isSorted(Node* head) {
    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->data > current->next->data) {
            return false; // Found a pair where the order is violated
        }
        current = current->next;
    }
    return true; // If we never found a pair where order is violated
}

// Function to insert a new node at the end of the list
void insertNode(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to delete the entire linked list to free memory
void deleteList(Node*& head) {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

int main() {
    Node* head = nullptr;
    int data;

    // Reading input until -1 is encountered
    while (true) {
        cin >> data;
        if (data == -1) break;
        insertNode(head, data);
    }

    // Check if the linked list is sorted
    if (isSorted(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Clean up the allocated memory
    deleteList(head);

    return 0;
}
