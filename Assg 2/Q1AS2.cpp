#include <iostream>

using namespace std;

// Binary Search implementation
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate middle index
        
        if (arr[mid] == target) {
            return mid;  // Target found at index 'mid'
        } else if (arr[mid] < target) {
            left = mid + 1;  // Search the right half
        } else {
            right = mid - 1;  // Search the left half
        }
    }
    
    return -1;  // Target not found in the array
}

// Linear Search implementation
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;  // Target found at index 'i'
        }
    }
    
    return -1;  // Target not found in the array
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    
    // Binary Search
    int binaryResult = binarySearch(arr, size, target);
    if (binaryResult != -1) {
        cout << "Binary Search: Element found at index " << binaryResult << endl;
    } else {
        cout << "Binary Search: Element not found in the array" << endl;
    }
    
    // Linear Search
    int linearResult = linearSearch(arr, size, target);
    if (linearResult != -1) {
        cout << "Linear Search: Element found at index " << linearResult << endl;
    } else {
        cout << "Linear Search: Element not found in the array" << endl;
    }
    
    return 0;
}

