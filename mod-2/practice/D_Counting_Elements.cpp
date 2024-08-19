#include <bits/stdc++.h>
using namespace std;
int calculateTheNumber (vector<int> &a) {
    int count =0;
    vector<int>exists(10001,false) ;
    for(int x:a){
       exists[x]=true;
    }
    for(int x:a){
        if(exists[x+1]){
            count++;
        }
        // cout << x + 1 << endl;
    }
    return count ;
}
int main() {
    int n;
    cin >> n;
    vector <int> a(n) ;
    for(int i=0; i<n; i++){
        cin >> a[i] ;
    }

    int result = calculateTheNumber(a) ;

    cout << result << endl; 

   return 0;
}