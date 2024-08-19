#include <bits/stdc++.h>
using namespace std;
int main()
{
   queue<int> firstQueue;
   queue<int> secondQueue;
   stack<int> thirdQueue;

   int val;
   while (cin >> val && val != -1)
   {
      firstQueue.push(val);
   }


   int val2;
   while (cin >> val2 && val2 != -1)
   {
      secondQueue.push(val2);
   }



   while (!secondQueue.empty())
   {
      int value = secondQueue.front();
      thirdQueue.push(value) ;
      secondQueue.pop();
   }



   bool flag = true;

   if (firstQueue.size() != thirdQueue.size())
    {
      cout << "NO" << endl ;
      return 0 ;
    }


    
   while (!firstQueue.empty() && !thirdQueue.empty())
   {
      cout << firstQueue.front() << " => "  ;
      cout  << thirdQueue.top() << " "  << endl; 

      if (firstQueue.front() != thirdQueue.top())
      {
         flag = false;
      }
      firstQueue.pop() ;
      thirdQueue.pop() ;
   }
   //first queue like 1 2 3 4 5 and third queue like 5 4 3 2 1
   //now check the both value to compare this is same or not 

   flag == true ? cout << "YES" : cout << "NO";

   // Node * newNode = new Node (val) ;
   // dataType * variable naem = allocate to dynamic memory than Node is a 
   //data type that will hold the value

   return 0;
}