#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int element){
    if(!st.empty()){
        st.push(element) ;
        return ;
    }
    int element2 = st.top() ;
    st.pop() ;

    insertAtBottom(st,element) ;

    st.push(element2) ;

}

    void reverseStack(stack<int> &st){
     if(st.empty()){
        return  ;
     }

     reverseStack(st) ;

         int element = st.top() ;
         st.pop() ;
         
    insertAtBottom(st,element) ;

    }


int main() {


    stack<int>st ;

    reverseStack(st) ;

   return 0;
}