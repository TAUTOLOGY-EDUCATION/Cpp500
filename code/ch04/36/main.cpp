#include <iostream>
#include <regex>

using namespace std;

int main() {
    string string1;
    cout << "Please insert string1: ";
    cin >> string1;
    string string2 = regex_replace(string1, regex("a"), "A");
    cout << string2 << endl;
    return 0;
}