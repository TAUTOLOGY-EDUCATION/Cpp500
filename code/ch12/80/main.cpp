#include <iostream>
#include <vector>
#include <set>

using namespace std;

void print(auto a) {
    cout << "[";
    for (auto i = a.begin(); i != a.end(); i++) {
        if (i != a.begin()) {
            cout << ", ";
        }
        cout << *i;
    }
    cout << "]" << endl;
}

int main() {
    vector<char> array1 {'a', 'b', 'c', 'd', 'e', 'f'};
    set<char> set1;
    for (char c: array1) {
        set1.insert(c);
    }
    print(set1);
    return 0;
}
