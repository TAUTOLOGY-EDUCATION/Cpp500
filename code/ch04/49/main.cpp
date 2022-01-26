#include <iostream>
#include <vector>

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
    vector<int> array1 = {0, 1, 2, 3, 4, 5};
    vector<int> array2 (array1.begin(), array1.begin() + 3);
    print(array2);
    return 0;
}