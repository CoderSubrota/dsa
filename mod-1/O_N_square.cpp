#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin >> n;
   for(int i=1; i<=n; i++){
       for(int j=n; j<=n; j++){
         cout << i*j << endl;
       }
   }
   //O(N*N) 
   return 0;
}