#include <iostream>
#include <vector>

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
    vector<char> array4 {'a', 'b', 'c', 'd', 'e', 'f'};
    for (int i = 0; i < 3; i++) {
        int index;
        cout << "Please insert index: ";
        cin >> index;
        char element;
        cout << "Please insert element: ";
        cin >> element;
        array4.insert(array4.begin() + index, element);
    }
    print(array4);
    return 0;
}