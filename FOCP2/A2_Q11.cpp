//Calculate the sum of elements on the primary and secondary diagonals of a square matrix.
#include <iostream>
using namespace std;

void diagonalSum(int matrix[][10], int n) {
    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - i - 1];
    }
    cout << "Primary diagonal sum: " << primarySum << endl;
    cout << "Secondary diagonal sum: " << secondarySum << endl;
}

int main() {
    int n, matrix[10][10];
    cout << "Enter size of square matrix: ";
    cin >> n;
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    diagonalSum(matrix, n);
    return 0;
}