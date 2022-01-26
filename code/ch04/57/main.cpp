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
    vector<int> array4 = {0, 4, 2, 3, 1};
    sort(array4.begin(), array4.end(), greater<int>());
    print(array4);
    return 0;
}