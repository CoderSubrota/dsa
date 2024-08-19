
#include<bits/stdc++.h>
using namespace std ;
int main(){

int n;
cin >> n;
for(int i=1; i*i<=n; i++){
    cout << i << " " ;
}

cout << endl ;

for(int i=1; i*i <=n; i=i*2){
    cout << i << " " ;
}

return 0;


}
