#include <iostream>
#include <set>
#include <algorithm>

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
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6};
    set<int> difference_set;
    set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(), inserter(difference_set, difference_set.begin()));
    print(difference_set);
    return 0;
}