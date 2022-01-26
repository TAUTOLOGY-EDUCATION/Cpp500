#include <iostream>

using namespace std;

int main() {
    double _min;
    for (int i = 0; i < 5; i++) {
        double number;
        cout << "Please insert number " << i + 1 << ": ";
        cin >> number;
        if (i == 0) {
            _min = number;
        }
        else {
            if (number < _min) {
                _min = number;
            }
        }
    }
    cout << _min << endl;
    return 0;
}
