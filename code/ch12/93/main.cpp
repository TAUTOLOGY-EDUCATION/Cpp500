#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<string> country {"Brazil", "China", "Germany", "Japan", "Sweden"};
    map<string, int> map1;
    int n = country.size();
    int _min = 0;
    for (int i = 0; i < n; i++) {
        double income;
        cout << "Please insert " << country[i] << " income: ";
        cin >> income;
        map1[country[i]] = income;
        if (i == 0) {
            _min = income;
        }
        else {
            if (income < _min) {
                _min = income;
            }
        }
    }
    cout << "min income: " << _min << endl;
    for (auto pair: map1) {
        if (pair.second == _min) {
            cout << "lowest income country: " << pair.first << endl;
        }
    }
    return 0;
}
