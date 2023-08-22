#include <iostream>
using namespace std;

// Diagonal Matrix
void diagonalMatrix(int mat[], int n, int elements[]) {
    for (int i = 0; i < n; i++) {
        mat[i * n + i] = elements[i];
    }
}

// Tri-diagonal Matrix
void triDiagonalMatrix(int mat[], int n, int elements[]) {
    for (int i = 0; i < n; i++) {
        mat[i * n + i] = elements[i];
        if (i > 0) mat[i * n + i - 1] = elements[i - 1];
        if (i < n - 1) mat[i * n + i + 1] = elements[i + 1];
    }
}

// Lower Triangular Matrix
void lowerTriangularMatrix(int mat[], int n, int elements[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            mat[i * n + j] = elements[i * (i + 1) / 2 + j];
        }
    }
}

// Upper Triangular Matrix
void upperTriangularMatrix(int mat[], int n, int elements[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            mat[i * n + j] = elements[i * (n - i) + j - i];
        }
    }
}

// Symmetric Matrix
void symmetricMatrix(int mat[], int n, int elements[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            mat[i * n + j] = elements[i * (i + 1) / 2 + j];
            mat[j * n + i] = elements[i * (i + 1) / 2 + j]; // Symmetric element
        }
    }
}

int main() {
    int n = 4;
    int elements[] = {1, 2, 3, 4};

    // Diagonal Matrix
    int diagonalMat[n * n] = {0};
    diagonalMatrix(diagonalMat, n, elements);

    // Tri-diagonal Matrix
    int triDiagonalMat[n * n] = {0};
    triDiagonalMatrix(triDiagonalMat, n, elements);

    // Lower Triangular Matrix
    int lowerTriangularMat[n * n] = {0};
    lowerTriangularMatrix(lowerTriangularMat, n, elements);

    // Upper Triangular Matrix
    int upperTriangularMat[n * n] = {0};
    upperTriangularMatrix(upperTriangularMat, n, elements);

    // Symmetric Matrix
    int symmetricMat[n * n] = {0};
    symmetricMatrix(symmetricMat, n, elements);

    return 0;
}

