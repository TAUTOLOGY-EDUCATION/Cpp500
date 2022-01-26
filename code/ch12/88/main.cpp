#include <iostream>

using namespace std;

int main() {
    double _max;
    for (int i = 0; i < 5; i++) {
        double number;
        cout << "Please insert number " << i + 1 << ": ";
        cin >> number;
        if (i == 0) {
            _max = number;
        }
        else {
            if (number > _max) {
                _max = number;
            }
        }
    }
    cout << _max << endl;
    return 0;
}
