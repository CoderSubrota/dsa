#include <stack>
#include <string>
#include <iostream>

std::string reverseString(std::string s) {
    std::stack<char> stack;
    for (char c : s) {
        stack.push(c);
    }
    std::string reversedS = "";
    while (!stack.empty()) {
        reversedS += stack.top();
        stack.pop();
    }
    return reversedS;
}

int main() {
    std::string s = "hello";
    std::cout << "Reversed string: " << reverseString(s) << std::endl;
    return 0;
}