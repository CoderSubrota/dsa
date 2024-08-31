#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> ageMap;
    int n;

    // Get the number of entries from the user
    cout << "Enter the number of people: ";
    cin >> n;

    // Get names and ages from the user and store them in the map
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;

        ageMap[name] = age;  // Add the name and age to the map
    }

    // Print the map contents
    cout << "\nNames and Ages:\n";
    for (auto val : ageMap) {
        cout << val.first << " is " << val.second << " years old." << endl;
    }

    return 0;
}
