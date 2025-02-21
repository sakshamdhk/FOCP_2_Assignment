//Calculate the sum and average of n numbers stored in an array.
#include <iostream>
using namespace std;

void calculateSumAndAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    calculateSumAndAverage(arr, n);
    return 0;
}