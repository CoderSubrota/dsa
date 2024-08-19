#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int>myList;

    int val;
    while (cin >> val && val!=-1)
    {
        myList.push_back(val) ;
    }

auto it = find( myList.begin(), myList.end(), 10) ;

  
//it what will be the output if I use the it into the for loop
//than i can get the value of the find if the value is available
//in the list than it will say true otherwise it will say false.

cout<< * it << " " ; 
  
   return 0;
}