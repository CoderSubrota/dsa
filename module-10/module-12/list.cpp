#include <bits/stdc++.h>
using namespace std;

int main() {
    int query;
    cin >> query;

    list<int> array;

    for(int i = 0; i < query; i++) {
        int opt;
        cin >> opt;
        if(opt == 0) {
            long long int val;
            cin >> val;
            array.push_front(val);
        } else if(opt == 1) {
            long long int val;
            cin >> val;
            array.push_back(val);
        } else if(opt == 2) {
            int pos;
            cin >> pos;
            if(pos < array.size()) {
                auto it = array.begin();
                advance(it, pos);
                array.erase(it);
            } else {
                cout << "Invalid" << endl;
                continue;
            }
        }

        cout << "L -> ";
        for(auto it : array) {
            cout << it << " ";
        }
        cout << endl;

        array.reverse();

        cout << "R -> ";
        for(auto it : array) {
            cout << it << " ";
        }
        cout << endl;

        array.reverse();
    }

    return 0;
}