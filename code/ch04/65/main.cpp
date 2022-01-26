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
    vector<int> array1 = {1, 2, 3, 1, 2, 3};
    array1.erase(array1.begin() + array1.size() - 1);
    array1.erase(array1.begin() + 2);
    print(array1);
    return 0;
}