#include <iostream>

using namespace std;

// Define the node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

// Function to find and print the middle element(s) of the linked list
void printMiddle(Node* head) {
    if (!head) {
        cout << "List is empty." << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev_slow = NULL;

    // Traverse the list with slow and fast pointers
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;  // Move fast pointer by two steps
        prev_slow = slow;         // Keep track of the previous slow pointer position
        slow = slow->next;        // Move slow pointer by one step
    }

    // Now slow points to the middle element(s)
    if (fast == NULL) {
        // List length is even, print both middle elements
        cout << prev_slow->data << " " << slow->data << endl;
    } else {
        // List length is odd, print the middle element
        cout << slow->data << endl;
    }
}

// Function to insert a new node at the end of the list
void insertNode(Node*& head, int data) {
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node * temp = head ;
    while (temp->next != NULL)
    {
      temp = temp->next ;
    }
    temp->next = newNode ;
}

// Function to delete the entire linked list to free memory
void deleteList(Node*& head) {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = NULL;
}

int main() {
    Node* head = NULL;
    int data;

    // Reading input until -1 is encountered
    while (true) {
        cin >> data;
        if (data == -1) break;
        insertNode(head, data);
    }

    // Print the middle element(s)
    printMiddle(head);

    // Clean up memory by deleting the linked list
    deleteList(head);

    return 0;
}

//prev_slow , fast, slow 
//fats  = fats->next->next;
//prev_slow = slow;

//slow = slow->next ;

// 10 20(prev_slow->data)30(slow) 40 