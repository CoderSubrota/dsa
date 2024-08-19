#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    //
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    v.resize(3);

    replace(v.begin() + 1, v.end(), 1, 87);
    //
    // int it = find(v.begin(),v.end(),2) ;
    //  for(auto it)
    
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v.at(2) << endl;
     cout << v[1] <<endl ;
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}