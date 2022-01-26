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
    cout << "]";
}

int main() {
    vector<char> array6 = {'d', 'a', 'c', 'b', 'e'};
    sort(array6.begin(), array6.end());
    print(array6);
    return 0;
}