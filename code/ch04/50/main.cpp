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
    vector<string> array2 = {"ant", "bird", "cat", "dog", "eagle"};
    array2[3] = "duck";
    print(array2);
    return 0;
}