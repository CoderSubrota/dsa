#include <iostream>

using namespace std;

// Define the node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a new node with given data at a specified index
bool insertAtIndex(Node*& head, int index, int data) {
    if (index < 0) {
        cout << "Invalid" << endl;
        return false;
    }
    
    Node* newNode = new Node(data);
    
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return true;
    }
    
    Node* current = head;
    int currentIndex = 0;
    while (current && currentIndex < index - 1) {
        current = current->next;
        currentIndex++;
    }
    
    if (!current) {
        cout << "Invalid" << endl;
        delete newNode;
        return false;
    }
    
    newNode->next = current->next;
    current->next = newNode;
    return true;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
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

    // Reading the initial linked list until -1 is encountered
    while (true) {
        cin >> data;
        if (data == -1) break;
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Number of queries
    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int index, value;
        cin >> index >> value;
        bool success = insertAtIndex(head, index, value);
        if (success) {
            printList(head);
        }
    }

    // Clean up memory by deleting the linked list
    deleteList(head);

    return 0;
}
