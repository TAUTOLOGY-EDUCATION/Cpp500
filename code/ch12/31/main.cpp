#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    set<char> set1(begin(str1), end(str1));
    for (auto s = set1.begin(); s != set1.end(); s++) {
        cout << *s << " " << count(str1.begin(), str1.end(), *s) << endl;
    }
    return 0;
}