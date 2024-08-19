#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N + 1, 0);  // Array to hold the elements, 1-indexed
    vector<long long> prefixSum(N + 1, 0);  // Prefix sum array, 1-indexed

    // Read the elements into the array
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
        // Compute the prefix sum
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }

    // Process each query
    for (int i = 0; i < Q; ++i) {
        int L, R;
        cin >> L >> R;
        // Calculate the sum from L to R using prefix sums
        long long sum = prefixSum[R] - prefixSum[L - 1];
        cout << sum << endl;
    }

    return 0;
}
