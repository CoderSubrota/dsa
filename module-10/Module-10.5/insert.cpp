#include <bits/stdc++.h>
using namespace std;
int main()
{
    int query;
    cin >> query;
    list<int> myList;

    for (int i = 1; i <= query; i++)
    {
        int pos;
        cin >> pos;
        int getSize = myList.size();
        if (pos > getSize || pos < 0) cout << "Invalid";
        auto it = myList.begin();

        advance(it, pos);

        int val;
        cin >> val;

        myList.insert(it, val); // it , 2, 5 // 1, 25 //advance it,post //auto it = myList.begin() ;
    }
    // myList.reverse();

    for (auto it : myList)
        cout << it << " ";

    return 0;
}