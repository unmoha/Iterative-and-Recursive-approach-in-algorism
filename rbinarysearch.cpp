#include <iostream>
#include <vector>
using namespace std;

int binarySearchRecursive(const vector<int>& arr, int key, int left, int right) {
    if (left > right) {
        return -1; // Key not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == key) {
        return mid; // Key found
    } 
    else if (arr[mid] < key) {
        return binarySearchRecursive(arr, key, mid + 1, right);
    } 
    else {
        return binarySearchRecursive(arr, key, left, mid - 1);
    }
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14};
    int key = 10;

    int result = binarySearchRecursive(arr, key, 0, arr.size() - 1);

    if (result != -1) {
        cout << "Key found at index: " << result << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
