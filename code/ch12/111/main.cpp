#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (9 - i <= j && j <= 9 + i) {
                cout << "x";
            }
            else {
                cout << "-";
            } 
        }
        cout << endl;
    }
    return 0;
}
