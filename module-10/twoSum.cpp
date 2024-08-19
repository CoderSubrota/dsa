#include <bits/stdc++.h>
using namespace std;
int main()
{
   cout << "Enter size";
   int n;
   cin >> n;
   vector<int> array(n);
   cout << "Enter value";
   for (int i = 0; i < n; i++)
   {
      cin >> array[i];
   }
   int len = array.size();
   cout << "Enter check value";
   int che;
   cin >> che;
   bool flag = false;
   for (int i = 0; i < len; i++)
   {
      for (int j = 0; j < len; j++)
      {

         if (array[i] + array[j] == che)
         {
            flag = true; // return false
            break;
         }
      }
   }
   // return false
   if (flag == true)
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }
   return 0;
}