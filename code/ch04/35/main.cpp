#include <iostream>
#include <regex>

using namespace std;

int main() {
    string string1;
    cout << "Please insert string1: ";
    cin >> string1;
    cout << regex_replace(string1, regex("a"), "A") << endl;
    return 0;
}