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
    vector<int> array1 {-10, 7, -33, 15, 29};
    int n = array1.size();
    for (int i = n - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            array1.erase(array1.begin() + i);
        }
    }
    print(array1);
    return 0;
}