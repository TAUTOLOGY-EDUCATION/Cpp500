#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> array1;
    double _max;
    for (int i = 0; i < 5; i++) {
        double number;
        cout << "Please insert number " << i + 1 << ": ";
        cin >> number;
        array1.push_back(number);
        if (i == 0) {
            _max = number;
        }
        else {
            if (number > _max) {
                _max = number;
            }
        }
    }
    int countMax = 0;
    int n = array1.size();
    for (int i = 0; i < n; i++) {
        if (_max == array1[i]) {
            countMax += 1;
        }
    }
    cout << "max: " << _max << endl;
    cout << "countMax: "  << countMax << endl;
    return 0;
}
