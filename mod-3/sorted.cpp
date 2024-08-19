#include <bits/stdc++.h>
using namespace std;
int isSorted(vector<int> & array, int n) {
   for(int i=0; i<n-1; i++){
    //  cout << array[i] << " " << array[i+1] << " "  <<endl;
         if(array[i] > array[i+1]){
            return 0;
         }
   }
    return 1;
}
int main() {
    int n;
    cin >> n;
     vector<int> array(n) ;
    for(int i=0; i<n; i++){
        cin >> array[i] ;
    }

    int result = isSorted(array,n) ;
    if(result==1){
        cout << "YES" <<endl ;
    }
    else{
        cout << "NO" << endl ;
    }
    
   return 0;
}