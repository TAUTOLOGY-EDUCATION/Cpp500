#include <iostream>

using namespace std;

int main() {
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < i + 1; j++) {
            if (j == i) {
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
