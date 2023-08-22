#include <iostream>

using namespace std;

int findMissingNumber(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the missing element is on the left or right
        if (arr[mid] != mid + 1 && (mid == 0 || arr[mid - 1] == mid)) {
            return mid + 1;
        }

        // If the missing element is on the left side
        if (arr[mid] != mid + 1) {
            right = mid - 1;
        }
        // If the missing element is on the right side
        else {
            left = mid + 1;
        }
    }

    // If no missing number is found
    return -1;
}

int main() {
    int sortedArray[] = {1, 2, 3, 4, 9, 10, 11};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);

    int missingNumber = findMissingNumber(sortedArray, size);

    if (missingNumber != -1) {
        cout << "Missing number: " << missingNumber << endl;
    } else {
        cout << "No missing number found." << endl;
    }

    return 0;
}

