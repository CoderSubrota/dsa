#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> myStack;

    myStack.push(10);

    myStack.push(20);
    myStack.push(30);
    myStack.pop();
    myStack.push(40);
    cout << myStack.size() << endl;
    cout << myStack.top() << endl;

    int empt = myStack.empty();

    if (!empt)
        cout << "OK";
    else
        cout << "Empty";

    return 0;
}