#include <iostream>
#include <vector>
#include <set>

using namespace std;

void print(set<double> s) {
    vector<double> a(s.begin(), s.end());
    cout << "{";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "}" << endl;
}

int main() {
    set<double> set1;
    for (int i = 0; i < 5; i++) {
        double number;
        cout << "Please insert number " << i + 1 << ": ";
        cin >> number;
        set1.insert(number);
    }
    print(set1);
    return 0;
}
