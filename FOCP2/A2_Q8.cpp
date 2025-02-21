//Find the length of the longest subsequence of consecutive integers in an unsorted array.
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findLongestConsecutiveSubsequence(int arr[], int n) {
    bubbleSort(arr, n);
    int longest = 1, current = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            current++;
        } else if (arr[i] != arr[i - 1]) {
            if (current > longest) {
                longest = current;
            }
            current = 1;
        }
    }
    return (current > longest) ? current : longest;
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
    cout << "Length of longest consecutive subsequence: " << findLongestConsecutiveSubsequence(arr, n) << endl;
    return 0;
}