//Create a program to print a butterfly pattern for a given size n.
#include <iostream>
using namespace std;

void butterflyPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    butterflyPattern(n);
    return 0;
}