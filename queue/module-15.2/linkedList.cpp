#include <iostream>

// Node class representing each element in the stack
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class implemented using a singly linked list
class Stack {
private:
    Node* head; // Pointer to the top element of the stack
    int size;   // Size of the stack

public:
    Stack() {
        head = nullptr;
        size = 0;
    }

    // Get the current size of the stack
    int getSize() {
        return size;
    }

    // Check whether the stack is empty
    bool isEmpty() {
        return size == 0;
    }

    // Push an element to the top of the stack
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    // Pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    // Get the top element of the stack
    int getTop() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }
};

// Main function to demonstrate the Stack operations
int main() {
    int q;
    std::cin >> q;
    Stack stack;

    for (int i = 0; i < q; ++i) {
        int type;
        std::cin >> type;

        if (type == 1) {
            // Query to get the size of the stack
            std::cout << stack.getSize() << std::endl;
        } else if (type == 2) {
            // Query to check if the stack is empty
            std::cout << (stack.isEmpty() ? "true" : "false") << std::endl;
        } else if (type == 3) {
            // Query to push an element to the stack
            int data;
            std::cin >> data;
            stack.push(data);
        } else if (type == 4) {
            // Query to pop the top element from the stack
            stack.pop();
        } else if (type == 5) {
            // Query to get the top element of the stack
            std::cout << stack.getTop() << std::endl;
        }
    }

    return 0;
}
