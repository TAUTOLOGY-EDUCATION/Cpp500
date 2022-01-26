#include <iostream>

using namespace std;

int main() {
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    int n = str1.length();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            cout << str1[i] << endl;
        }
    }
    return 0;
}