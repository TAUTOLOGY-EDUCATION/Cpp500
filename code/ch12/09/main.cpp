#include <iostream>

using namespace std;

int main() {
    int count = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}