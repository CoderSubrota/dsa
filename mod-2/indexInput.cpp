#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a.insert(a.begin() + 3, 50);

    auto it = find(a.begin(), a.end(), 14);

    if (it != a.end())
        cout << "Found";
    else
        cout << "Not found";

    cout << endl;

    for (int val : a)
    {
        cout << val << " ";
    }

    return 0;
}