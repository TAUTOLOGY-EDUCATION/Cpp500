#include <iostream>
#include <algorithm>
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
    set<string> set1, set2;
    for (int i = 0; i < 3; i++) {
        string str1;
        cout << "Please insert element to set1: ";
        cin >> str1;
        set1.insert(str1);
    }
    for (int j = 0; j < 3; j++) {
        string str1;
        cout << "Please insert element to set2: ";
        cin >> str1;
        set2.insert(str1);
    }
    set<string> set1subtract2, set2subtract1;
    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set1subtract2, set1subtract2.end()));
    print(set1subtract2);
    set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(), inserter(set2subtract1, set2subtract1.end()));
    print(set2subtract1);
    return 0;
}
