#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> array1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = array1.size();
    for (int i = 0; i < n; i++) {
        if (array1[i] % 3 == 0) {
            cout << array1[i] << endl;
        }
    }
    return 0;
}