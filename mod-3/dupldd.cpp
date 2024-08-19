#include <bits/stdc++.h>
using namespace std;

int findDuplicates(vector<int> &a)
{
    int flag = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i+1; j < a.size(); j++)
        {
        
            if(a[i] ==a[j])
            {
                flag=1;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int result = findDuplicates(a);
    if (result == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    //0 - 4
    // 0 0 -> 1 , 2
    //1 1 -> 2 , 3
    // 2 2 -> 3 ,4
    //3 3 -> 4
    return 0;
}
