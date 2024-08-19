#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,q;
   cin>>n>>q;
   vector<int> elements ;
   int numbers;
   for(int i=0;i<n;i++){
    cin >> numbers;
    elements.push_back(numbers) ;
   }
   for (int i = 0; i < q; i++)
   {
    cin >> numbers;
    auto it = find(elements.begin(), elements.end(), numbers) ;
    if(it != elements.end()){
        cout << "found"<<endl;
    }else{
        cout << "not found"<<endl;
    }

   

   }
   return 0;
}