//Multiply two matrices of appropriate dimensions.
#include <iostream>
using namespace std;

void multiplyMatrices(int A[][10], int B[][10], int result[][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1, c1, r2, c2, A[10][10], B[10][10], result[10][10];
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter first matrix elements: ";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }
    cout << "Enter second matrix elements: ";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }
    multiplyMatrices(A, B, result, r1, c1, c2);
    cout << "Resultant Matrix: " << endl;
    printMatrix(result, r1, c2);
    return 0;
}