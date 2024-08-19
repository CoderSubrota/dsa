#include <bits/stdc++.h>
using namespace std;
int main() {
 vector<int>array ;
 while (1)
 {
   int val;
   cin >> val;
   if(val==-1){
    break;
   }
   array.push_back(val) ;
 }

 //size will take that use vector if say size will not take than use vector 

int len = array.size() ;
bool flag = false ;
  for (int i = 0; i < len/2; i++)
  {
    if(array[i]==array[len-i-1]){
      flag = true ;
    }
  }

  if(flag==true){
    cout << "YES" ;
  }else{
    cout << "NO" ;
  }
  
return 0;
}