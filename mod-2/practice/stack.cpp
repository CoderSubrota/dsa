
#include<bits/stdc++.h>
using namespace std;
int main(){

stack<int>mystack;

mystack.push(20) ;

cout << "Size of stack: " << mystack.size() << endl;

if(mystack.empty()){
    cout << "Stack is empty" <<endl;
    return 0;
}
for(int i=0; i<mystack.size(); i++){
 cout << mystack.top() << " " ;
 mystack.pop() ;


}



}
