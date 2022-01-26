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
    set<int> intersect_set;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersect_set, intersect_set.begin()));
    print(intersect_set);
    return 0;
}