#include <iostream>
#include <set>
#include <vector>

using namespace std;

void print(set<char> s) {
    vector<char> a(s.begin(), s.end());
    cout << "{";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "}" << endl;
}

int main() {
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    set<char> set1(begin(str1), end(str1));
    print(set1);
    return 0;
}