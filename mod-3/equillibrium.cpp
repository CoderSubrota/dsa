#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    int a = 0, b = 0;

    for (int i = 0; i < mid; i++)
    {
        a = a + arr[i];
    }

    for (int i = mid + 1; i <= n - 1; i++)
    {
        b = b + arr[i];
    }

    if (a == b)
    {
        cout << mid << endl;
    }
    else
    {
        cout << "Mid index not match" << endl;
    }

    return 0;
}