#include <iostream>

using namespace std;

int main() {
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    string char1;
    cout << "Please insert char1: ";
    cin >> char1;
    if (char1.length() == 1) {
        int n = str1.length();
        for (int i = 0; i < n; i++) {
            if (str1[i] == char1[0]) {
                cout << i << endl;
            }
        }
    }
    return 0;
}