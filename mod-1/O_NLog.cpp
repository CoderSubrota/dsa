#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    for(int i=2; i<=n; i=i+2){
        cout <<i << " "; 
    }
    cout << endl ;
        for(int i=1; i<=n; i=i*2){
        cout <<i << " "; 
    }
    //O(Nlog) 

// cout << endl ;

//  while (n>0) //n>0 digit n%10 , n=n/10
//  {
//     /* code */
//     int digit = n%10;
//     cout << digit << " ";
//     n=n/10;
//  }
 
   return 0;
}