#include <iostream>
#include <vector>
#include <regex>

using namespace std;

int main() {
    vector<string> vowel {"a", "e", "i", "o", "u"};
    string str1;
    cout << "Please insert str1: ";
    getline(cin, str1);
    for (string v: vowel) {
        str1 = regex_replace(str1, regex(v), "*");
    }
    cout << str1 << endl;
    return 0;
}