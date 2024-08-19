#include <bits/stdc++.h>
using namespace std;
vector<int> nums(vector<int> &a)
{
    vector<int> prefixSum(a.size());
 
    prefixSum[0] = a[0];
    for (int i = 1; i <=  a.size() - 1; i++)
    {
       prefixSum[i] = prefixSum[i-1] + a[i] ;
       //0 + 1
       //20 + 25 = 45
       //1+2
       //45 + 84 = 129

       // 0 1 2 
       //1 2 3
    //    cout << prefixSum[i] << " " ;
    }
    return prefixSum;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = nums(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}