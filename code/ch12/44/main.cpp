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
    vector<int> arrayX {0, 2 ,4 ,6, 8};
    vector<char> array4 {'a', 'b', 'c', 'd', 'e', 'f'};
    int n = arrayX.size();
    for (int i = 0; i < n; i++) {
        array4.insert(array4.begin() + arrayX[i], '*');
    }
    print(array4);
    return 0;
}