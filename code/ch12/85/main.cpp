#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

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
    vector<char> array1 {'t', 'u', 'r', 'i', 'n', 'g'};
    vector<char> array2 {'n', 'e', 'w', 't', 'o', 'n'};
    set<char> set1, set2;
    int n = array1.size();
    int m = array2.size();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            set1.insert(array1[i]);
        }
    }
    for (int j = 0; j < m; j++) {
        if (j % 2 == 1) {
            set2.insert(array2[j]);
        }
    }
    set<char> union_set;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(union_set, union_set.begin()));
    print(union_set);
    return 0;
}
