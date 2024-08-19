#include <bits/stdc++.h>
using namespace std ;

int main() {
    int N, Q;
    cin >> N >> Q;

    unordered_set<int> elements;
    int number;

    // Read the elements into the unordered_set for fast lookup
    for (int i = 0; i < N; ++i) {
        cin >> number;
        elements.insert(number);
    }

    // Process each query
    for (int i = 0; i < Q; ++i) {
        cin >> number;
        if (elements.find(number) != elements.end()) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
