#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}