#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> array2;
    for (int i = 1; i <= 25; i++) {
        array2.push_back(i);
    }
    for (int i = 0; i < array2.size(); i++) {
        int count = 0;
        for (int j = 1; j <= array2[i]; j++) {
            if (array2[i] % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << array2[i] << endl;
        }
    }
    return 0;
}