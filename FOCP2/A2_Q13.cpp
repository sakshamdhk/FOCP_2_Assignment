//Write a program to search for a target value in a row-wise and column-wise sorted matrix.
#include <iostream>
using namespace std;

bool searchInSortedMatrix(int matrix[][10], int rows, int cols, int target) {
    int i = 0, j = cols - 1;
    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            cout << "Element found at position: (" << i << ", " << j << ")" << endl;
            return true;
        }
        if (matrix[i][j] > target) {
            j--;
        } else {
            i++;
        }
    }
    cout << "Element not found" << endl;
    return false;
}

int main() {
    int rows, cols, matrix[10][10], target;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter matrix elements in sorted order:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Enter target element to search: ";
    cin >> target;
    searchInSortedMatrix(matrix, rows, cols, target);
    return 0;
}