#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 50}; // Assume this list

    // Find the position (iterator) where we want to insert
    std::list<int>::iterator it = myList.begin();
    std::advance(it, 2); // Move iterator to the third position

    // Insert the value 42 at the specified position
    myList.insert(it, 42);

    // Print the updated list
    for (const int& num : myList)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
