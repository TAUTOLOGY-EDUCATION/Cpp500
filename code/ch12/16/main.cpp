#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Please insert number: ";
    cin >> number;
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        cout << "is prime" << endl;
    }
    else {
        cout << "is not prime" << endl;
    }
    return 0;
}