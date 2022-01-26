#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int countA = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Please insert word: ";
        string word;
        cin >> word;
        int nAppear = count(word.begin(), word.end(), 'a');
        countA += nAppear;
    }
    cout << countA << endl;
    return 0;
}