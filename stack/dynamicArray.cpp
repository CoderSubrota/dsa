#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int *myarray = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> myarray[i];
    }

    int dltNumber;
    cin >> dltNumber ;
    for (int i = 0; i < n; i++)
    {
      if(myarray[i]==dltNumber) {
        delete [] myarray ;
      }
    }


  for (int i = 0; i < n; i++)
    {
      cout <<  myarray[i] << " ";
    }

    return 0;
}
//earase begin + index 
