#include <iostream>

using namespace std;

int main() {
    string concatString = "";
    for (int i = 0; i < 5; i++) {
        string str;
        cout << "Please insert str: ";
        getline(cin, str);
        concatString += str;
    }
    cout << concatString << endl;
    return 0;
}