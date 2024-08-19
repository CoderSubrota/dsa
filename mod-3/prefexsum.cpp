#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    vector<long long int> A(n) ;

    for(int i=0; i<n; i++) {
        cin >> A[i] ;
    }

    vector<long long int> prefex(n) ;

    prefex[0] = A[0] ;

    for(int i=1; i<n; i++){
        prefex[i] = prefex[i-1] + A[i] ;
        // cout << i << " " << i-1  << endl ; 
        // cout << prefex[i] << " " << prefex[i-1]  << endl ; 
    }


    for(int i=n-1; i>=0; i--){
         cout << prefex[i] << " ";
    }
   return 0;
}