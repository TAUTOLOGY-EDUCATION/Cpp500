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
    set<int> set1;
    for (int i = 0; i < 5; i++) {
        int number;
        cout << "Please insert number: ";
        cin >> number;
        set1.insert(number);
    }
    print(set1);
    cout << set1.size() << endl;
    return 0;
}
