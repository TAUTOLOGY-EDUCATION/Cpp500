#include <iostream>

using namespace std;

int main() {
    int sumx = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0) {
            sumx += i;
        }
    }
    cout << sumx << endl;
    return 0;
}