#include <iostream>
#include <set>

using namespace std;

void print(auto &a) {
    cout << "{";
    for (auto i = a.begin(); i != a.end(); i++) {
        if (i != a.begin()) {
            cout << ", ";
        }
        cout << *i;
    } 
    cout << "}";
}

int main() {
    set<string> set1;
    string str1, str2, str3;
    cout << "Please insert str1: ";
    cin >> str1;
    cout << "Please insert str2: ";
    cin >> str2;
    cout << "Please insert str3: ";
    cin >> str3;
    set1.insert({str1, str2, str3});
    print(set1);
    return 0;
}