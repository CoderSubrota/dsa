#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=1; i <= sqrt(n); i++){
      if(n%i==0)
          if(n/i != i){
             cout << i << " " << n/i << endl;
          }

          if(n/i == i){
             cout << i << " X " << n/i << " = " << i* n/i<< endl;
          }
    }
    //O(sqrt(N))
   return 0;
}