#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1;
    cout << "Please insert string1: ";
    cin >> string1;
    cout << (string1.find("a") != string::npos) << endl;
    return 0;
}