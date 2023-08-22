#include <iostream>

const int MAX_SIZE = 100;

using namespace std;

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void matrixMultiplication(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transposeMatrix(int mat[][MAX_SIZE], int transposedMat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposedMat[j][i] = mat[i][j];
        }
    }
}

int main() {
    int choice;
    cout << "Enter your choice:\n";
    cout << "1. Reverse array\n";
    cout << "2. Matrix multiplication\n";
    cout << "3. Transpose matrix\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            int size;
            cout << "Enter the size of the array: ";
            cin >> size;

            int arr[MAX_SIZE];
            cout << "Enter the elements of the array: ";
            for (int i = 0; i < size; ++i) {
                cin >> arr[i];
            }

            reverseArray(arr, size);

            cout << "Reversed array: ";
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            break;
        }
        case 2: {
            int rows1, cols1, rows2, cols2;
            cout << "Enter the number of rows and columns of matrix 1: ";
            cin >> rows1 >> cols1;

            int mat1[MAX_SIZE][MAX_SIZE];
            cout << "Enter the elements of matrix 1:\n";
            for (int i = 0; i < rows1; ++i) {
                for (int j = 0; j < cols1; ++j) {
                    cin >> mat1[i][j];
                }
            }

            cout << "Enter the number of rows and columns of matrix 2: ";
            cin >> rows2 >> cols2;

            int mat2[MAX_SIZE][MAX_SIZE];
            cout << "Enter the elements of matrix 2:\n";
            for (int i = 0; i < rows2; ++i) {
                for (int j = 0; j < cols2; ++j) {
                    cin >> mat2[i][j];
                }
            }

            if (cols1 != rows2) {
                cout << "Matrix multiplication is not possible.\n";
            } else {
                int result[MAX_SIZE][MAX_SIZE];
                matrixMultiplication(mat1, mat2, result, rows1, cols1, rows2, cols2);

                cout << "Resultant matrix:\n";
                for (int i = 0; i < rows1; ++i) {
                    for (int j = 0; j < cols2; ++j) {
                        cout << result[i][j] << " ";
                    }
                    cout << "\n";
                }
            }
            break;
        }
        case 3: {
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

            int transposedMat[MAX_SIZE][MAX_SIZE];
            transposeMatrix(mat, transposedMat, rows, cols);

            cout << "Transposed matrix:\n";
            for (int i = 0; i < cols; ++i) {
                for (int j = 0; j < rows; ++j) {
                    cout << transposedMat[i][j] << " ";
                }
                cout << "\n";
            }
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}

