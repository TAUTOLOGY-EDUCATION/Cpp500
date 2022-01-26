#include <iostream>

using namespace std;

int main() {
    string str1;
    cout << "Please insert str1: ";
    getline(cin, str1);
    int n = str1.length();
    string str2 = "";
    for (int i = n - 1; i >= 0; i--) {
        str2 += str1[i];
    }
    cout << str2 << endl;
    return 0;
}