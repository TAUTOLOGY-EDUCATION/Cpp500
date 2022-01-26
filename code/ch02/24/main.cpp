#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a = 2.4;
    double b = 2.5;
    cout << fixed << setprecision(1);
    cout << a << " + " << b << " = ";
    cout << fixed << setprecision(4);
    cout << a + b;
    return 0;
}