#include <iostream>
using namespace std;

// Node class representing each element in the queue
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Queue class implemented using a singly linked list
class Queue {
private:
    Node* frontNode; // Pointer to the front element of the queue
    Node* rearNode;  // Pointer to the rear element of the queue
    int size;        // Size of the queue

public:
    // Constructor to initialize the queue
    Queue() {
        frontNode = nullptr;
        rearNode = nullptr;
        size = 0;
    }

    // Enqueue an element to the rear of the queue
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rearNode == nullptr) {
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        size++;
    }

    // Dequeue an element from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            return -1;
        }
        int data = frontNode->data;
        Node* temp = frontNode;
        frontNode = frontNode->next;
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        delete temp;
        size--;
        return data;
    }

    // Get the front element of the queue
    int front() {
        if (isEmpty()) {
            return -1;
        }
        return frontNode->data;
    }

    // Check whether the queue is empty
    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;
        Queue queue;

        while (q--) {
            int queryType;
            cin >> queryType;

            if (queryType == 1) {
                int data;
                cin >> data;
                queue.enqueue(data);
            } else if (queryType == 2) {
                cout << queue.dequeue() << endl;
            } else if (queryType == 3) {
                cout << queue.front() << endl;
            } else if (queryType == 4) {
                cout << (queue.isEmpty() ? "true" : "false") << endl;
            }
        }
    }
    return 0;
}
