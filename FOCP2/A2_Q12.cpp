//Write a program to find the row in a 2D matrix that has the maximum sum of its elements.
#include <iostream>
using namespace std;

void findMaxRowSum(int matrix[][10], int rows, int cols) {
    int maxSum = 0, maxRow = 0;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    cout << "Row with maximum sum: " << maxRow + 1 << " (Sum: " << maxSum << ")" << endl;
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
    findMaxRowSum(matrix, rows, cols);
    return 0;
}