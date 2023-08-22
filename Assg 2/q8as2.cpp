#include <iostream>

int countDistinctElements(int arr[], int n) {
    int distinctCount = 0;

    for (int i = 0; i < n; ++i) {
        bool isDistinct = true;

        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) {
            ++distinctCount;
        }
    }

    return distinctCount;
}

int main() {
    int n;
    std::cout << "Enter the length of the array: ";
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int distinctCount = countDistinctElements(arr, n);
    std::cout << "Total distinct elements: " << distinctCount << std::endl;

    return 0;
}

