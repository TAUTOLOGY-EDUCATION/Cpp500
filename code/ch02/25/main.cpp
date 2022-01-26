#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a = 5;
    double b = 2;
    cout << fixed << setprecision(2);
    cout << a << " - " << b << " = ";
    cout << fixed << setprecision(4);
    cout << a - b;
    return 0;
}