#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arra(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }
    int low = 0;
    int high = n - 1;
    int a = 0, b = 0;
    int mid = (low + high) / 2;
    int midIndex = 0;
    bool check = true ;

    for (int i = 0; i < n; i++) //O(N)
    {
        for (int j = 0; j < mid; j++)//O(N)
        {
            a += arra[j];
        }
        for (int j = mid + 1; j < n; j++)//O(N)
        {
            b += arra[j];
        }
        if (a == b)
        {
            midIndex = mid;
        }
        else if (a > b)
        {
            low = mid - 1;
        }
        else if (a < b)
        {
            high = mid + 1;
        }
        else
        {
            midIndex = false;
        }
    }
    if (midIndex == false)
    {
        cout << "Index not found" << endl;
    }
    else
    {
        cout << midIndex << endl;
    }
    //N+N = 2N = N
    //O(N*N) // O(N^2) ; 10^3
    return 0;
}