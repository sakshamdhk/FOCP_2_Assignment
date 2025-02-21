//Print all the boundary elements of a matrix.
#include <iostream>
using namespace std;

void printBoundaryElements(int matrix[][10], int rows, int cols) {
    cout << "Boundary elements: ";
    for (int j = 0; j < cols; j++) cout << matrix[0][j] << " ";
    for (int i = 1; i < rows - 1; i++) {
        cout << matrix[i][0] << " ";
        if (cols > 1) cout << matrix[i][cols - 1] << " ";
    }
    if (rows > 1) {
        for (int j = 0; j < cols; j++) cout << matrix[rows - 1][j] << " ";
    }
    cout << endl;
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
    printBoundaryElements(matrix, rows, cols);
    return 0;
}