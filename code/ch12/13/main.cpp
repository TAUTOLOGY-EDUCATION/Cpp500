#include <iostream>

using namespace std;

int main() {
    double product = 1;
    for (int i = 0; i < 5; i++) {
        double num;
        cout << "Please insert num" << i + 1 << ": ";
        cin >> num;
        if (num > 0)
            product *= num;
    }
    cout << product << endl;
    return 0;
}