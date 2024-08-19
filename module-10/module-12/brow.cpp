#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;
    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    Node* current;

    LinkedList() {
        head = NULL;
        tail = NULL;
        current = NULL;
    }

    // Insert element at the end
    void insertElement(string val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            current = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to handle "visit"
    void visitFunction(string word) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->val == word) {
                current = temp;
                cout << current->val << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Not available" << endl;
    }

    // Function to handle "prev"
    void prevFunction() {
        if (current != NULL && current->prev != NULL) {
            current = current->prev;
            cout << current->val << endl;
        } else {
            cout << "Not available" << endl;
        }
    }

    // Function to handle "next"
    void nextFunction() {
        if (current != NULL && current->next != NULL) {
            current = current->next;
            cout << current->val << endl;
        } else {
            cout << "Not available" << endl;
        }
    }
};

int main() {
    LinkedList list;
    

    // Read input until "end"
    while (true) {
        string val;
        cin >> val ;
         if(val=="end") break; 
        list.insertElement(val);
    }

    int query;
    cin >> query;
    cin.ignore(); // Ignore newline character after the number of queries

    for (int i = 0; i < query; i++) {
        string browserCheck;
        getline(cin, browserCheck);

        stringstream stream(browserCheck);
        string command, word;
        stream >> command;
        
        if (command == "visit") {
            stream >> word;
            list.visitFunction(word);
        } else if (command == "prev") {
            list.prevFunction();
        } else if (command == "next") {
            list.nextFunction();
        }
    }

    return 0;
}
