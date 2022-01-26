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
    vector<char> array1 = {'a', 'b', 'c', 'd', 'e', 'f'};
    print(array1);
    return 0;
}