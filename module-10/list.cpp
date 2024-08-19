#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> b(10, 5);
    b.push_back(50);
    // cout << b.back() ;
    b.reverse();
    for (auto it : b)
    {
        cout << it << " ";
    }
    b.sort(greater<int>());
    b.unique();
    cout << endl;

    for (int num : b)
    {
        cout << num << " ";
    }
    auto it = find(b.begin(), b.end(), 55);
    cout << endl
         << *it << endl;
    if (*it == 5)
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
    vector<int> a(10, 5);
    a.push_back(20);
    replace(a.begin(), a.end(), 20, 18); // replace value //new value
    auto it2 = find(a.begin(), a.end(), 18);
    if (*it2)
        cout << endl
             << "Found";
    else
        cout << endl
             << "Not found ";
    return 0;
}