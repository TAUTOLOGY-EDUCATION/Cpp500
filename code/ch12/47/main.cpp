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
    vector<char> array4 {'a', 'b', 'c', 'd', 'e', 'f'};
    int num1;
    cout << "Please insert num1: ";
    cin >> num1;
    if (num1 <= array4.size() - 1) {
        array4.erase(array4.begin() + num1);
    }
    print(array4);
    return 0;
}