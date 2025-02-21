//Input an array of n numbers and find the maximum and minimum elements.
#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n) {
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;
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
    findMaxMin(arr, n);
    return 0;
}