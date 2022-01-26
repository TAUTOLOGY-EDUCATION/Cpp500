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
    set<int> set1 = {1, 2, 3, 4, 5, 6};
    set1.insert(7);
    print(set1);
    return 0;
}