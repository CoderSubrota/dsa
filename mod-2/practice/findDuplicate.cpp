#include <iostream>
using namespace std;

bool hasDuplicate(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    // Find the first occurrence of the target value
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Check if the target value exists at the found index
    if (left < n && arr[left] == target) {
        // Check for duplicates on both sides of the found index
        if (left > 0 && arr[left - 1] == target) {
            return true;
        }
        if (left < n - 1 && arr[left + 1] == target) {
            return false;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    if (hasDuplicate(arr, n, target)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}