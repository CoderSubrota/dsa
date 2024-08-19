#include <bits/stdc++.h>
using namespace std;
int main() {
int N,M,K;
  cin >> N >> M >> K;
//   cout << n << m << k ;
 for(int i=N; i>=1; i--){ // O(N)
    cout << i << " " ;
 }
 cout << endl ;
 for(int i=M; i>=1; i--){
   cout << i << " ";
 }

cout << endl ;
 for(int i=K; i>=1; i--){
   cout << i << " ";
 } 
 //O(N + M + K)
 //O(K)
 int bigONotation = 0;

 if(N>M || N>K){
    bigONotation = N ;
 }
 else  if(M>N|| M>K){
    bigONotation = K ;
 }else{
    bigONotation = K ;
 }
 cout << endl;
 cout << "Big O notation O(" << bigONotation << ")" ;
   return 0;
}