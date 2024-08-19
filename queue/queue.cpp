#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> myQueue;
    queue<int>yourQueue; 
    myQueue.push(10);
    myQueue.push(56);
    myQueue.push(20);
    cout << myQueue.front();
    cout << endl 
         << myQueue.back();
         cout << myQueue.size()  <<endl ;
       myQueue.empty() ? cout << "true" : cout << "false" ;
       myQueue.emplace(1) ;




       while (!myQueue.empty())
       {
         int value = myQueue.front() ;
         yourQueue.push(value) ;
         myQueue.pop() ;
       }
       

       cout << endl << "Your queue"  << endl; 
       while (!yourQueue.empty())
       {
         cout << yourQueue.front() << " " ;
         yourQueue.pop() ;
       }

       
    return 0;
}