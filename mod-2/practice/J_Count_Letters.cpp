#include <bits/stdc++.h>
using namespace std ;

int main() {
    string S;
    cin >> S;
    vector<int> freq(26) ;
    for (char c : S) {
        freq[c - 'a']++; 
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (freq[c - 'a'] > 0) {
            cout << c << " : " << freq[c - 'a'] << endl;
        }
    }

    return 0;
}