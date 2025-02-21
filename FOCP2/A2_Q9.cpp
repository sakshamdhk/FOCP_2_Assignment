//Write a program to find the transpose of a matrix.
#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][10], int rows, int cols) {
    int transposed[10][10];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols, matrix[10][10];
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    transposeMatrix(matrix, rows, cols);
    return 0;
}