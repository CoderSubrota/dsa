#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse the first K elements of a queue
void reverseFirstKElements(queue<int>& q, int K) {
    if (K <= 0 || q.size() < K) {
        return;
    }

    stack<int> s;

    // Step 1: Dequeue the first K elements and push them onto a stack
    for (int i = 0; i < K; ++i) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Pop all elements from the stack and enqueue them back to the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move the remaining elements (n-K) to the back of the queue
    int remaining = q.size() - K;
    for (int i = 0; i < remaining; ++i) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        queue<int> q;
        for (int i = 0; i < N; ++i) {
            int element;
            cin >> element;
            q.push(element);
        }

        reverseFirstKElements(q, K);

        // Print the modified queue
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }

    return 0;
}
