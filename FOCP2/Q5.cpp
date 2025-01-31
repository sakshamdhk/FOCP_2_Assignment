//WAP that calculates the compound interest for a given principal amount , rate of interest , and time period using constants and user input for variables.
#include <iostream>
using namespace std;

int main() {
    double principal, time, amount, compInt;
    double rate = 5.0; 

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time period (in years): ";
    cin >> time;

    amount = principal;
    for (int i = 0; i < time; i++) {
        amount = amount * (1 + rate / 100);
    }

    compInt = amount - principal;

    cout << "Compound Interest: " << compInt << endl;
    cout << "Total Amount after " << time << " years: " << amount << endl;

    return 0;
}