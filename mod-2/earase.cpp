#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    replace(v.begin(), v.end(), 62, 96);

    v.erase(v.begin() + 2, v.end() - 2);
    //  v.resize(10) ;

    for (int value : v)
    {
        cout << value << " ";
    }

    return 0;
}