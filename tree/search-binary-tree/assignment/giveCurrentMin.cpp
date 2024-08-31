#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
  
     priority_queue<long long,
     vector<long long>, 
     bool(*)(long long, long long) > minQueue([](long long a, long long b) {
        return a > b;
    });

    // Read initial list
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        minQueue.push(x);
    }

    int q;
    cin >> q;

    while (q--) {
        int command;
        cin >> command;

        switch (command) {
            case 0: {
                // Insert new element
                long long x;
                cin >> x;
                minQueue.push(x);

                // Print current minimum value
                if (!minQueue.empty()) {
                    cout << minQueue.top() << endl;
                } else {
                    cout << "Empty" << endl;
                }
                break;
            }
            case 1: {
                // Print current minimum value
                if (!minQueue.empty()) {
                    cout << minQueue.top() << endl;
                } else {
                    cout << "Empty" << endl;
                }
                break;
            }
            case 2: {
                // Delete current minimum value and print new minimum value
                if (!minQueue.empty()) {
                    minQueue.pop();
                    if (!minQueue.empty()) {
                        cout << minQueue.top() << endl;
                    } else {
                        cout << "Empty" << endl;
                    }
                } else {
                    cout << "Empty" << endl;
                }
                break;
            }
        }
    }

    return 0;
}