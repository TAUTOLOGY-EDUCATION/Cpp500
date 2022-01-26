#include <iostream>
#include <map>

using namespace std;

void print(auto a) {
    for (auto pair: a) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    map<double, int> map1;
    for (int i = 0; i < 5; i++) {
        double number;
        cout << "Please insert number " << i + 1 << ": ";
        cin >> number;
        map1[number]++;
    }
    double mode = 0;
    int freq = 0;
    for (auto entry: map1) {
        if (entry.second > freq) {
            mode = entry.first;
            freq = entry.second;
        }
    }
    cout << mode << endl;
    return 0;
}
