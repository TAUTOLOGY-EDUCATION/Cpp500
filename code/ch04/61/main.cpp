#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]";
}

int main() {
    vector<char> array7 = {'c', 'o', 'd', 'e'};
    sort(array7.begin(), array7.end());
    print(array7);
    return 0;
}