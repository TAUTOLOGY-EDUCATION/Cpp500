#include <iostream>

using namespace std;

int main() {
    int countLen = 0;
    for (int i = 0; i < 5; i++) {
        string word;
        cout << "Please insert word: ";
        cin >> word;
        int length = word.length();
        countLen += length;
    }
    cout << countLen << endl;
    return 0;
}