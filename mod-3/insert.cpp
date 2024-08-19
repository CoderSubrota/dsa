

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    //
    int m;
    cin >> m;

    vector<int> B(m);

    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    
    }

//
    int x;
    cin >> x;

    for (int i=m-1; i>=0; i--)
    {
        A.insert(A.begin()+x, B[i]);
    }
//

    for (int i = 0; i < n+m; i++)
    {
        cout << A[i] << " ";
    }
    //a.insert(a.begin()+postion, 50)
       //a.insert(a.begin(),52) ;
       // 10 2 5 45 45
    return 0;
}

