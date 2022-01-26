#include <iostream>

using namespace std;

int main() {
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    int int1;
    cout << "Please insert int1: ";
    cin >> int1;
    while (str1.length() < int1) {
        str1 += '*';
    }
    cout << str1 << endl;
    return 0;
}