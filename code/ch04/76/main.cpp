#include <iostream>

using namespace std;

void print(auto &a) {
    int length = end(a) - begin(a);
    cout << "[";
    for (int i = 0; i < length; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]" << endl;
}

int main() {
    int array2[] = {100, 101, 102, 103, 104};
    print(array2);
    return 0;
}