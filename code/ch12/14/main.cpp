#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Please insert number: ";
    cin >> number;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}