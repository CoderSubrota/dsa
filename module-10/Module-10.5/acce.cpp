#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1) break; 
        myList.push_back(val);
    }
     myList.sort();
    for (auto it : myList) cout << it << " ";
    return 0;
}