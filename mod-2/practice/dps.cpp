#include <iostream>

int main() {
    int n;
    // std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    // std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Sort the array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Check for duplicates
    int duplicates = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            duplicates++;
            std::cout << "Duplicate found: " << arr[i] << std::endl;
        }
    }

    if (duplicates == 0) {
        std::cout << "No duplicates found." << std::endl;
    } else {
        std::cout << "There are " << duplicates << " duplicates in the array." << std::endl;
    }

    return 0;
}