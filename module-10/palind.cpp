#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class LinkedList {


public:

    Node* head;
    Node* tail;

    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insert(int x) {
        Node* temp = new Node(x);
        temp->next = NULL;
        temp->prev = tail;
        if (tail!= NULL) {
            tail->next = temp;
        } else {
            head = temp;
        }
        tail = temp;
    }

bool isPalindrome() {
    Node* slow = head;
    Node* fast = head;

    // Find the middle of the list
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    Node* prev = nullptr;
    Node* curr = slow;
    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Compare the first and second halves
    Node* start = head;
    Node* end = prev;
    while (start && end) {
        if (start->data != end->data) return false;
        start = start->next;
        end = end->prev;
    }

    return true;
}

    void checkPalindrome() {
        if (isPalindrome()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
};

int main() {
    LinkedList list;
    int x;
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        list.insert(x);
    }
    list.checkPalindrome();
    return 0;
}