#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();  // Ignore the newline after T
    
    while (T--) {
        string S;
        getline(cin, S);
        
        map<string, int> word_count;
        string word, result;
        int max_count = 0;

        stringstream ss(S);
        while (ss >> word) {
            word_count[word]++;
            if (word_count[word] > max_count) {//my hi => mp[my] > count
                max_count = word_count[word];
                result = word;
            }
            //word_count[word] => search in map if max than print 
        }
        cout << result << " " << max_count << endl;
    }

    return 0;
}
