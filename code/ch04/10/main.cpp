#include <iostream>

using namespace std;

int main() {
    double double1, double2;
    cout << "Please insert double1: ";
    cin >> double1;
    cout << "Please insert double2: ";
    cin >> double2;

    cout << "double1: " << double1 << endl;
    cout << "double2: " << double2 << endl;

    double a = double1 + double2;
    cout << "sum: " << a << endl;

    double b = double1 - double2;
    cout << "difference: " << b << endl;

    double c = double1 * double2;
    cout << "product: " << c << endl;

    double d = double1 / double2;
    cout << "quotient: " << d << endl;

    return 0;
}