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
    set<int> set1;
    int num1, num2, num3;
    cout << "Please insert num1: ";
    cin >> num1;
    cout << "Please insert num2: ";
    cin >> num2;
    cout << "Please insert num3: ";
    cin >> num3;
    set1.insert(num1);
    set1.insert(num2);
    set1.insert(num3);
    print(set1);
    return 0;
}