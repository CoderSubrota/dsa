#include <bits/stdc++.h>
using namespace std;
int main() {
     vector<int> v;
     queue<int>myQue;
    v.push_back(20) ;
    v.push_back(30) ;
    v.push_back(40) ;
    myQue.push(20) ;
    myQue.push(40) ;
    while (!myQue.empty())
    {
        cout << myQue.front() << " " ;
        myQue.pop() ;
    }
    

    while (!v.empty())
    {
        /* code */
        cout << v.back() << " " ;
        v.pop_back() ;
    }

   return 0;
}