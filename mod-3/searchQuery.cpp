#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int q;
    cin >> q;
    vector<int> searchQury(q);

    for (int i = 0; i < q; i++)
    {
        cin >> searchQury[i];
    }


    for (int i = 0; i < q; i++)
    {
        auto it = find(array.begin(), array.end(), searchQury[i]);
        if (it != array.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}