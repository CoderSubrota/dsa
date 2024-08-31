#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Custom comparator function to sort by name, and by age if names are the same
bool compare(pair<string, int>& a, pair<string, int>& b) {
    if (a.first == b.first) {
        return a.second > b.second; // Sort by age if names are the same
    }
    return a.first < b.first; // Otherwise, sort by name
}

int main() {
    vector<pair<string, int>> nameAgeVec;
    int n;

    // Get the number of entries from the user
   cin >> n;

    // Get names and ages from the user and store them in the vector
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        cin >> name;
        cin >> age;

        nameAgeVec.push_back({name, age}); // Add the name and age to the vector
    }

    // Sort the vector using the custom comparator function
    sort(nameAgeVec.begin(), nameAgeVec.end(), compare);

    // Print the sorted names and ages
   
    for (int i = 0; i < nameAgeVec.size(); i++) {
        cout << nameAgeVec[i].first << " " << nameAgeVec[i].second << " " << endl;
    }

    return 0;
}
