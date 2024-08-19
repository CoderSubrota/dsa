#include <bits/stdc++.h>
using namespace std;
int main() {
   queue<string>q ;
   int qu ;
   cin >> qu ;
   for(int i=0; i<qu; i++){
      int num ;
      cin >> num;
      if(num==0){
         string str ;
         cin >> str ;
         q.push(str) ;
      }else if(num==1){
          if(q.empty()){
            cout << "Invalid" << endl ;
          }else{
           cout << q.front() <<endl;
           q.pop() ;
          }
      }
   }
   return 0;
}