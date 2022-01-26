#include <iostream>

using namespace std;

int main() {
    int int1, int2;
    cout << "Please insert int1: ";
    cin >> int1;
    cout << "Please insert int2: ";
    cin >> int2;

    cout << "int1: " << int1 << endl;
    cout << "int2: " << int2 << endl;

    int a = int1 + int2;
    cout << "sum: " << a << endl;

    int b = int1 - int2;
    cout << "difference: " << b << endl;

    int c = int1 * int2;
    cout << "product: " << c << endl;

    int d = int1 / int2;
    cout << "quotient: " << d << endl;

    return 0;
}