#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> array1;
    double _min;
    for (int i = 0; i < 5; i++) {
        double number;
        cout << "Please insert number " << i + 1 << ": ";
        cin >> number;
        array1.push_back(number);
        if (i == 0) {
            _min = number;
        }
        else {
            if (number < _min) {
                _min = number;
            }
        }
    }
    int countMin = 0;
    int n = array1.size();
    for (int i = 0; i < n; i++) {
        if (_min == array1[i]) {
            countMin += 1;
        }
    }
    cout << "min: " << _min << endl;
    cout << "countMin: "  << countMin << endl;
    return 0;
}
