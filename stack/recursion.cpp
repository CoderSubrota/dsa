#include <bits/stdc++.h>
using namespace std;

int myfunc(int val)
{

    if (val == 0)  return 0;
    cout << val << endl;
    myfunc(val - 1);
}

int main()
{
    myfunc(10);
    return 0;
}
//