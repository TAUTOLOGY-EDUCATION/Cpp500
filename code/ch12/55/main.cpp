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
    vector<int> array1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    while (array1.size() != 7) {
        int number;
        cout << "Please insert number: ";
        cin >> number;
        auto i = find(array1.begin(), array1.end(), number);
        if (i != array1.end()) {
            array1.erase(i);
        }
    }
    print(array1);
    return 0;
}