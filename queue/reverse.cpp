#include <bits/stdc++.h>
using namespace std ;
// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int>& stk, int element) {
    // Base case: If the stack is empty, push the element
    if (stk.empty()) {
        stk.push(element);
        return;
    } 
    // Pop the top element
    int topElement = stk.top();
    stk.pop();
    
    // Recursively call insertAtBottom for the rest of the stack
    insertAtBottom(stk, element);
    
    // Push the top element back onto the stack
    stk.push(topElement);
}

// Function to reverse the stack using ecursion
void reverseStack(std::stack<int>& stk) {
    // Base case: If the stack is empty, return
    if (stk.empty()) {
        return;
    }
    
    // Pop the top element
    int topElement = stk.top();
    stk.pop();
    
    // Recursively call reverseStack for the rest of the stack
    reverseStack(stk);
    
    // Insert the popped element at the bottom of the stack
    insertAtBottom(stk, topElement);
}

int main() {
   stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);

   cout << "Original Stack: ";
   stack<int> temp = stk;
    while (!temp.empty()) {
       cout << temp.top() << " ";
        temp.pop();
    }
   cout <<endl;

    reverseStack(stk);

   cout << "Reversed Stack: ";
    while (!stk.empty()) {
       cout << stk.top() << " ";
        stk.pop();
    }
   cout <<endl;

    return 0;
}
