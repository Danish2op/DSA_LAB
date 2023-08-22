#include <iostream>
#include <limits> // Add this header for numeric_limits
using namespace std;

int main() {
  int choice;
  int array[100];
  int size = 0;
  int found = -1;

  cout << "---MENU---" << endl;
  cout << "1. CREATE" << endl;
  cout << "2. DISPLAY" << endl;
  cout << "3. INSERT" << endl;
  cout << "4. DELETE" << endl;
  cout << "5. LINEAR SEARCH" << endl;
  cout << "6. EXIT" << endl;

  do {
    cout << "Enter your choice: ";
    cin >> choice;

    if (cin.fail()) {
      cout << "Invalid input. Please enter a valid integer choice." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    switch (choice) {
      case 1:
        cout << "Enter the size of the array: ";
        cin >> size;
        if (size <= 0 || size > 100) {
          cout << "Invalid size. Please enter a value between 1 and 100." << endl;
          continue;
        }
        for (int i = 0; i < size; i++) {
          cout << "Enter element " << i + 1 << ": ";
          cin >> array[i];
        }
        break;
      case 2:
        if (size == 0) {
          cout << "Array is empty. Please create the array first." << endl;
          continue;
        }
        for (int i = 0; i < size; i++) {
          cout << array[i] << " ";
        }
        cout << endl;
        break;
      case 3:
        if (size == 0) {
          cout << "Array is empty. Please create the array first." << endl;
          continue;
        }
        cout << "Enter the index of the element to be inserted: ";
        int index;
        cin >> index;
        if (index < 0 || index >= size) {
          cout << "Invalid index. Please enter a value between 0 and " << size - 1 << "." << endl;
          continue;
        }
        cout << "Enter the element to be inserted: ";
        int element;
        cin >> element;
        array[index] = element;
        break;
      case 4:
        if (size == 0) {
          cout << "Array is empty. Please create the array first." << endl;
          continue;
        }
        cout << "Enter the index of the element to be deleted: ";
        int index2;
        cin >> index2;
        if (index2 < 0 || index2 >= size) {
          cout << "Invalid index. Please enter a value between 0 and " << size - 1 << "." << endl;
          continue;
        }
        array[index2] = 0;
        break;
      case 5:
        if (size == 0) {
          cout << "Array is empty. Please create the array first." << endl;
          continue;
        }
        cout << "Enter the element to be searched: ";
        int element2;
        cin >> element2;
        found = -1;
        for (int i = 0; i < size; i++) {
          if (array[i] == element2) {
            found = i;
            break;
          }
        }
        if (found == -1) {
          cout << "Element not found" << endl;
        } else {
          cout << "Element found at index: " << found << endl;
        }
        break;
      case 6:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice" << endl;
    }
  } while (choice != 6);

  return 0;
}

