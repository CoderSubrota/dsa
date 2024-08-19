#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<string>qu ;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int command;
        cin >> command;
        if(command==0){
         string name ;
         cin >> name ;

          qu.push(name) ;
        } else if(command==1)
        {
            if(qu.empty()){
                cout << "Invalid" << endl;
            }else {
                cout << qu.front() << endl;  
                qu.pop() ;
            }
        }
    }
   return 0;
}