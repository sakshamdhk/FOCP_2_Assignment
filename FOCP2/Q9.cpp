#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    char character;
    int integer;
    float floatingNumber;

    cout << "Enter a character: ";
    cin >> character;
    
    cout << "Enter an integer: ";
    cin >> integer;
    
    cout << "Enter a floating-point number: ";
    cin >> floatingNumber;

    cout << "\n-----------------------------\n";
    cout << setw(10) << "Character" << setw(10) << "Integer" << setw(15) << "Float\n";
    cout << "-----------------------------\n";
    cout << setw(10) << character << setw(10) << integer<< floatingNumber << "\n";
    cout << "-----------------------------\n";

    return 0;
}