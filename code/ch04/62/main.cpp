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
    vector<int> array1 = {0, 1, 2};
    vector<int> array2 = {3, 4, 5};
    array1.insert(array1.end(), array2.begin(), array2.end());
    print(array1);
    print(array2);
    return 0;
}