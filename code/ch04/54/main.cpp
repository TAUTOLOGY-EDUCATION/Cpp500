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
    vector<string> array3 = {"apple", "cherry", "eggfruit"};
    array3.insert(array3.begin() + 1, "banana");
    print(array3);
    return 0;
}