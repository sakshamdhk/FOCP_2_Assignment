//WAP to evaluate(a^b + c&d) where a , b , c and d are user inputs. Explain the precedence of bitwise operators in the program.
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter four integers (a, b, c, d): ";
    cin >> a >> b >> c >> d;

    int result = (a ^ b) + (c & d);

    cout << "Result of (a^b + c&d) is: " << result << endl;

    return 0;
}