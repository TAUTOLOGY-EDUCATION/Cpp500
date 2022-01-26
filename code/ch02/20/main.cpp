#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a = 12.5;
    cout << fixed << setprecision(1);
    cout << a;
    return 0;
}