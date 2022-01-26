#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]" << endl;
}

int main() {
    vector<char> array4 {'a', 'b', 'c', 'd', 'e', 'f'};
    char char1;
    cout << "Please insert str1: ";
    cin >> char1;
    auto i = find(array4.begin(), array4.end(), char1);
    if (i != array4.end()) {
        array4.erase(i);
    }
    print(array4);
    return 0;
}