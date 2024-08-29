#include <bits/stdc++.h>
using namespace std;

// Node class for a binary tree node (not used in heap operations)
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// MaxHeap class for implementing a max-heap
class MaxHeap {
public:
    vector<int> nodes; // Vector to store heap elements

    // Function to maintain the heap property from a node up to the root
    void up_heapify(int idx) {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2]) {
            // Swap current node with its parent if it's greater
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2; // Move to the parent's index
        }
    }

    // Function to maintain the heap property from a node down to the leaves
    void downHeapify(int idx) {
        while (true) {
            int largestIndex = idx; // Start with the current node as the largest
            int left = idx * 2 + 1; // Index of the left child
            int right = idx * 2 + 2; // Index of the right child

            // Check if left child exists and is greater than the current node
            if (left < nodes.size() && nodes[largestIndex] < nodes[left]) 
                largestIndex = left;

            // Check if right child exists and is greater than the current largest
            if (right < nodes.size() && nodes[largestIndex] < nodes[right]) 
                largestIndex = right;

            // If the largest node is still the current node, the heap property is satisfied
            if (largestIndex == idx) break;

            // Swap the current node with the largest child
            swap(nodes[largestIndex], nodes[idx]);

            // Move to the largest child's index
            idx = largestIndex;
        }
    }

    // Function to extract the maximum element from the heap
    int ExtractMax() {
        if (nodes.empty()) throw out_of_range("Heap is empty");
        int max = nodes[0]; // The root of the heap is the maximum element
        pop(0); // Remove the root element
        return max;
    }

    // Function to insert a new element into the heap
    void push(int val) {
        nodes.push_back(val); // Add the new element to the end
        up_heapify(nodes.size() - 1); // Restore the heap property
    }

    // Function to build a heap from an existing array
    void buildHeapFromArray(vector<int>& arr) {
        nodes = arr; // Copy the array into the heap
        int lastNonLeafNode = (arr.size() / 2) - 1; // Index of the last non-leaf node

        // Perform down-heapify from the last non-leaf node up to the root
        for (int i = lastNonLeafNode; i >= 0; i--) {
            downHeapify(i);
        }
    }

    // Function to print the elements of the heap
    void print() {
        for (int val : nodes) {
            cout << val << " "; // Print each element in the heap
        }
        cout << endl;
    }

    // Function to remove an element from the heap at a specific index
    void pop(int idx) {
        // Swap the element with the last one and remove it
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        if (idx < nodes.size()) {
            downHeapify(idx); // Restore the heap property
        }
    }
};

// Function to perform heap sort on an array
vector<int> heapSort(vector<int>& arr) {
    MaxHeap heap;
    heap.buildHeapFromArray(arr); // Build a heap from the input array
    vector<int> ans;

    // Extract elements from the heap and add them to the result vector
    for (int i = 0; i < arr.size(); i++) {
        ans.push_back(heap.ExtractMax());
    }

    reverse(ans.begin(), ans.end()); // Reverse the result to get sorted order
    return ans;
}

int main() {
    MaxHeap heap;
    
    // Insert elements into the heap
    heap.push(1);
    heap.push(2);
    heap.push(3);
    heap.push(4);
    heap.push(5);

    heap.print(); // Print the heap

    // Remove elements from the heap
    heap.pop(0);
    heap.pop(1);

    heap.print(); // Print the heap after removals

    // Array to be sorted using heap sort
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    heap.buildHeapFromArray(v); // Build a heap from the array
    heap.print(); // Print the heap

    vector<int> result = heapSort(v); // Sort the array using heap sort

    // Print the sorted array
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
