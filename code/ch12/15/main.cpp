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
    cout << count << endl;
    return 0;
}