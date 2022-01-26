#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 + i; j++) {
            if (j < 3 - i) {
                cout << "-";
            }
            else {
                cout << "x";
            } 
        }
        cout << endl;
    }
    return 0;
}
