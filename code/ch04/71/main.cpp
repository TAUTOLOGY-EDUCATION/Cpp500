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
    string array1[] = {"America", "Brazil", "China", "Dominican", "Egypt"};
    print(array1);
    return 0;
}