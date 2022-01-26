#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]";
}

int main() {
    vector<int> array5 = {-3, 5, 10, -7, 0};
    sort(array5.begin(), array5.end(), greater<int>());
    print(array5);
    return 0;
}