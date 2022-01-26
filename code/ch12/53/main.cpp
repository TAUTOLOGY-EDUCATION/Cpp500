#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]" << endl;
}

int main() {
    vector<int> array3;
    for (int i = 1; i < 26; i++) {
        array3.push_back(i);
    }
    int n = array3.size();
    for (int i = n - 1; i >= 0; i--) {
        if (array3[i] % 2 == 0) {
            if (array3[i] % 3 != 0) {
                array3.erase(array3.begin() + i);
            }
        }
        else {
            if (array3[i] % 3 == 0) {
                array3.erase(array3.begin() + i);
            }
        }
    }
    print(array3);
    return 0;
}