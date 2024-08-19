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

    

    vector<int> B;
    int flag = 0 ;
    for (int i = 0; i < n; i++)
    {
      B.push_back(A[i]) ; 
    }

    if(flag==1) {
        cout << "YES";
    }else{
        cout << "NO" ;
    }

    return 0;

}

// i==j ,  i+j == n-1 , i!=mid , i==mid ,
// j==mid, mid = n/2  else " "

//a.insert(a.begin()+position,value) ;