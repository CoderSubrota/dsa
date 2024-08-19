#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
         cin >> array[i] ;
    }

    vector <int> v(array,array+n) ;
     
    for(int val:v){
           cout << val << " " ;
    }
   
   return 0;
}