#include <iostream>

const int MAX_SIZE = 100;

using namespace std;

void calculateRowSum(int mat[][MAX_SIZE], int rows, int cols) {
    cout << "Sum of every row:\n";
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += mat[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void calculateColumnSum(int mat[][MAX_SIZE], int rows, int cols) {
    cout << "Sum of every column:\n";
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += mat[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int mat[MAX_SIZE][MAX_SIZE];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }

    int choice;
    cout << "Enter your choice:\n";
    cout << "1. Calculate sum of every row\n";
    cout << "2. Calculate sum of every column\n";
    cin >> choice;

    switch (choice) {
        case 1:
            calculateRowSum(mat, rows, cols);
            break;
        case 2:
            calculateColumnSum(mat, rows, cols);
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}

