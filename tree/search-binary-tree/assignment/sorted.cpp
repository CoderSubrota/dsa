#include <bits/stdc++.h>
using namespace std;

class sortedClass {
public:
    void sortedNumbers(int t) {
        for (int i = 0; i < t; i++) {
            set<int> uniqueNumbers; // Set to store unique and sorted numbers
            int n;
            cin >> n;
            for (int j = 0; j < n; j++) {
                int num;
                cin >> num;
                uniqueNumbers.insert(num); // Insert into set, duplicates are automatically handled
            }

            // Since set is sorted and contains unique elements, we can directly print it
            for(auto num : uniqueNumbers) {
                cout << num << " ";
            }
            cout << "\n";
        }
    }
};


int main() {
    sortedClass sc;

    int t;
    cin >> t;
    sc.sortedNumbers(t);

    return 0;
}
