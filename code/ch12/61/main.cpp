#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> array1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sumx = 0;
    int n = array1.size();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumx += array1[i] * array1[i];
        }
    }
    cout << sumx << endl;
    return 0;
}