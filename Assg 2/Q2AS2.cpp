#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the adjacent elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void missed(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i + 1] != arr[i] + 1) {
            int missingNum = arr[i] + 1;
            while (missingNum < arr[i + 1]) {
                cout << missingNum << ", ";
                missingNum++;
            }
        }
    }
}
	


int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

 cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, size);

 cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
missed(arr, size);
    return 0;
    
}

