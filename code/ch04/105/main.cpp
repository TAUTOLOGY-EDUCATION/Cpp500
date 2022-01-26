#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4, 5, 6};
    int int1;
    cout << "Please insert int1: ";
    cin >> int1;
    cout << (set1.find(int1) != set1.end()) << endl;
    return 0;
}