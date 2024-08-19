#include <bits/stdc++.h>
using namespace std;
bool checkElement(stack<int> &st, queue<int>&q) {
    if (st.size() != q.size())
    {
        return false ;
    }

       while (!st.empty() && !q.empty())
    {
        /* code */
        int stval = st.top();
        int qval = q.front();
        if (stval != qval)
        {
           return false ;
        }
        st.pop() ;
        q.pop() ; 
    }
 return true ;
}
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }



  bool result =   checkElement(st, q) ;
       
 
    if (result == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}