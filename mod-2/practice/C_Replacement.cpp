#include <bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin >> n;
 vector<int> array(n) ;

 for(int i=0; i<n; i++){
    cin >> array[i] ;
 }
 
 for(int val:array){
     if(val > 0) {
        val=1;
     }else if(val < 0){
        val = 2;
     }else{
        val = 0;
     }
     cout << val << " ";
 }
   return 0;
}