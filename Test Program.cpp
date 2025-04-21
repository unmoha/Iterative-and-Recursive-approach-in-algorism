#include <iostream>
#include <vector>
using namespace std;

// Function declarations
int binarySearchIterative(const vector<int>& arr, int key);
int binarySearchRecursive(const vector<int>& arr, int key, int left, int right);

// Iterative binary search
int binarySearchIterative(const vector<int>& arr, int key) {
    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

// Recursive binary search
int binarySearchRecursive(const vector<int>& arr, int key, int left, int right) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return binarySearchRecursive(arr, key, mid + 1, right);
    } else {
        return binarySearchRecursive(arr, key, left, mid - 1);
    }
}

// Main function
int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    vector<int> keys = {23, 5, 100, 2, 91};

    cout << "Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n\n";

    for (int key : keys) {
        cout << "Searching for " << key << ":\n";

        // Iterative search
        int iterResult = binarySearchIterative(arr, key);
        cout << "  Iterative: ";
        if (iterResult != -1) {
            cout << "Found at index " << iterResult;
        } else {
            cout << "Not found";
        }

        // Recursive search
        int recurResult = binarySearchRecursive(arr, key, 0, arr.size() - 1);
        cout << "\n  Recursive: ";
        if (recurResult != -1) {
            cout << "Found at index " << recurResult;
        } else {
            cout << "Not found";
        }

        cout << "\n\n";
    }

    return 0;
}
