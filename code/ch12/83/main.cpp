#include <iostream>
#include <vector>
#include <set>

using namespace std;

void print(auto a) {
    cout << "{";
    for (auto i = a.begin(); i != a.end(); i++) {
        if (i != a.begin()) {
            cout << ", ";
        }
        cout << *i;
    }
    cout << "}" << endl;
}

int main() {
    set<string> set1 {"1", "2", "3", "a", "b", "c"};
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    if (set1.find(str1) != set1.end()) {
        set1.erase(str1);
    }
    print(set1);
    return 0;
}
