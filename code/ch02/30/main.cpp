#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a = 2;
    double b = 3.5;
    cout << fixed << setprecision(2);
    cout << "Yesterday I lost " << a << "% today I made "  << b << "% profit";
    return 0;
}
