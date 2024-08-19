#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3] = {10,20,30};
    int b[3] = {10,20} ; 
    bool flag=false ;

    for(int i=0; i<3; i++){
        if(a[i]==b[i]){
            flag=true;
        }else{
         flag=false ;
        }
    }

    if(flag==true){
        cout << "YES" ;
    }else{
        cout << "NO" ; 
    }

   return 0;
}