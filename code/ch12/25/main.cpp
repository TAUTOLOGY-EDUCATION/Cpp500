#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<char> vowel {'a', 'e', 'i', 'o', 'u'};
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    bool hasVowel = false;
    for (char v: vowel) {
        if (find(str1.begin(), str1.end(), v) != str1.end()) {
            hasVowel = true;
            break;
        }
    }
    if (hasVowel == true) {
        cout << "There is vowel" << endl;
    }
    else {
        cout << "There is no vowel" << endl;
    }
    return 0;
}