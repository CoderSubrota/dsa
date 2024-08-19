#include <bits/stdc++.h>
using namespace std;


int main()
{
    stack<int> mystack;
    int val;

    while (cin >> val && val != -1)
    {
        mystack.push(val);
    }

    while (!mystack.empty())
    {
        /* code */
        cout << mystack.top() << " " ;
        mystack.pop();
    }

    return 0;
}