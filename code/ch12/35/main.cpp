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
    vector<string> array1;
    while (array1.size() != 5) {
        string element;
        cout << "Please insert element: ";
        getline(cin, element);
        if (find(array1.begin(), array1.end(), element) == array1.end()) {
            array1.push_back(element);
        }
    }
    print(array1);
    return 0;
}