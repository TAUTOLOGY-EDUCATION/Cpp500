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
    cout << "]" << endl;
}

int main() {
    vector<int> array1;
    for (int i = 0; i < 20; i++) {
        array1.push_back(i);
    }
    print(array1);
    return 0;
}