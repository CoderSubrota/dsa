// #include <iostream>
// #include <stack>
// using namespace std;

// class MinStack {
// private:
//     stack<int> mainStack; // Main stack to hold all elements
//     stack<int> minStack;  // Auxiliary stack to hold the minimum elements

// public:
//     // Push the given number in the stack
//     void push(int num) {
//         mainStack.push(num);
//         if (minStack.empty() || num <= minStack.top()) {
//             minStack.push(num);
//         }
//     }

//     // Remove and return the top element from the stack if present, else return -1
//     int pop() {
//         if (mainStack.empty()) {
//             return -1;
//         }
//         int topElement = mainStack.top();
//         mainStack.pop();
//         if (topElement == minStack.top()) {
//             minStack.pop();
//         }
//         return topElement;
//     }

//     // Return the top element of the stack if present, else return -1
//     int top() {
//         if (mainStack.empty()) {
//             return -1;
//         }
//         return mainStack.top();
//     }

//     // Return the minimum element of the stack if present, else return -1
//     int getMin() {
//         if (minStack.empty()) {
//             return -1;
//         }
//         return minStack.top();
//     }
// };

// int main() {
//     MinStack stack;
//     stack.push(3);
//     stack.push(5);
//     cout << "Top: " << stack.top() << endl;     // Output: 5
//     cout << "Min: " << stack.getMin() << endl; // Output: 3
//     stack.push(2);
//     stack.push(1);
//     // cout << "Min: " <<
// }