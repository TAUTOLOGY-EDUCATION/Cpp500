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
    while (set1.size() != 5) {
        int number;
        cout << "Please insert number: ";
        cin >> number;
        set1.insert(number);
    }
    print(set1);
    return 0;
}
