#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1, string2;
    cout << "Please insert string1: ";
    cin >> string1;
    cout << "Please insert string2: ";
    cin >> string2;
    cout << (string1.find(string2) != string::npos) << endl;
    return 0;
}