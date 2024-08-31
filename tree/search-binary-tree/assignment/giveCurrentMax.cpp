#include <bits/stdc++.h>

using namespace std;

// Comparison function for priority queue
bool compare(pair<pair<string, int>, int> a, pair<pair<string, int>, int> b) {
    if (a.second == b.second) {
        return a.first.second > b.first.second;
    }
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

     vector<pair<pair<string, int>, int>> students;
     priority_queue<pair<pair<string, int>, int>, 
     vector<pair<pair<string, int>, int>>,
     bool(*)(pair<pair<string, int>, int>,
     pair<pair<string, int>, int>)> maxQueue(compare);

    // Read initial student data
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.push_back({{name, roll}, marks});
        maxQueue.push({{name, roll}, marks});
    }

    int q;
    cin >> q;

    while (q--) {
        int command;
        cin >> command;

        switch (command) {
            case 0: {
                // Insert new student
                string name;
                int roll, marks;
                cin >> name >> roll >> marks;
                students.push_back({{name, roll}, marks});
                maxQueue.push({{name, roll}, marks});

                // Print current max student
                if (!maxQueue.empty()) {
                    pair<pair<string, int>, int> maxStudent = maxQueue.top();
                    cout << maxStudent.first.first << " " << maxStudent.first.second << " " << maxStudent.second << endl;
                } else {
                    cout << "Empty" << endl;
                }
                break;
            }
            case 1: {
                // Print current max student
                if (!maxQueue.empty()) {
                    pair<pair<string, int>, int> maxStudent = maxQueue.top();
                    cout << maxStudent.first.first << " " << maxStudent.first.second << " " << maxStudent.second << endl;
                } else {
                    cout << "Empty" << endl;
                }
                break;
            }
            case 2: {
                // Delete max student and print new max student
                if (!maxQueue.empty()) {
                    maxQueue.pop();
                    if (!maxQueue.empty()) {
                        pair<pair<string, int>, int> newMaxStudent = maxQueue.top();
                        cout << newMaxStudent.first.first << " " << newMaxStudent.first.second << " " << newMaxStudent.second << endl;
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