#include <bits/stdc++.h>
using namespace std;
int main() {
    int array[6] = {1,2,4,5,22,33} ;
    int array2[6] = {1,2,4,5,22,33} ;
    bool flag = true ;
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
        //  cout << array[i] << " " << array2[i] << endl;
          if(array[i]!=array2[i]) {
           flag=false ;
           break; 
          }
        }
    }

    
  if(flag==true) cout << "YES" ; else cout << "NO" ;

   return 0;
}