#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (j < i) {
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
