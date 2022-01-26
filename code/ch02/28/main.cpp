#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a = 3.5;
    cout << fixed << setprecision(2);
    cout << "He has " << a << " dollars more than me";
    return 0;
}