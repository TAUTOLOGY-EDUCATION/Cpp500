#include <iostream>

using namespace std;

int main() {
    int int1;
    double double1;
    cout << "Please insert int1: ";
    cin >> int1;
    cout << "Please insert double1: ";
    cin >> double1;

    cout << "int1: " << int1 << endl;
    cout << "double1: " << double1 << endl;

    double a = int1 + double1;
    cout << "sum: " << a << endl;

    double b = int1 - double1;
    cout << "difference: " << b << endl;

    double c = int1 * double1;
    cout << "product: " << c << endl;

    double d = int1 / double1;
    cout << "quotient: " << d << endl;

    return 0;
}