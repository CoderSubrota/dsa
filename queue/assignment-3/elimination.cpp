#include <bits/stdc++.h>
using namespace std;
bool checkElements(string str){
  queue<char>qu ;
  for(char c:str){
     if(qu.empty()){
        qu.push(c) ;
     }else if(qu.front()=='0' && c=='1'){
        qu.pop() ;
     }else{
        qu.push(c) ;
     }
  }
  if(qu.empty()){
    return true ;
  }

  return false ;
}

int main() {
    int t;
    cin >>  t; 

    for(int i=0; i<t; i++){
        string str;
        cin >> str ;
      bool result = checkElements(str) ;
      if(result==true){
        cout << "YES" <<endl;
      }else{
      cout << "NO" <<endl ;
      }
    }
   return 0;
}