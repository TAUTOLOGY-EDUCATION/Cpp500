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
    vector<int> array1 = {1, 2, 3, 4, 5};
    int numeric1;
    cout << "Please insert numeric1: ";
    cin >> numeric1;
    cout << (find(array1.begin(), array1.end(), numeric1) != array1.end()) << endl;
    return 0;
}