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
    vector<int> array1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = array1.size();
    vector<int> backwardArray;
    for (int i = n - 1; i >= 0; i--) {
        backwardArray.push_back(array1[i]);
    }
    print(backwardArray);
    return 0;
}