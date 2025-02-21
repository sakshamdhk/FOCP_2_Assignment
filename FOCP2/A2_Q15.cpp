//A saddle point is an element of the matrix that is the smallest in its row but the largest in its column. Write a program to find the saddle point.
#include <iostream>
using namespace std;

void findSaddlePoint(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int minRow = matrix[i][0], colIndex = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }
        bool isSaddlePoint = true;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][colIndex] > minRow) {
                isSaddlePoint = false;
                break;
            }
        }
        if (isSaddlePoint) {
            cout << "Saddle point found at (" << i << ", " << colIndex << ") with value: " << minRow << endl;
            return;
        }
    }
    cout << "No saddle point found" << endl;
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
    findSaddlePoint(matrix, rows, cols);
    return 0;
}