#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.clear() ;
    v.push_back(60);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}