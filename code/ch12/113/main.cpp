#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 9; i++) {
        int number = 0;
        for (int j = 0; j < 9 + i; j++) {
            if (i + j >= 8 && j <= 8) {
                number++;
                cout << number;
            }
            else if (i + j >= 8 && j > 8) {
                number--;
                cout << number;
            }
            else {
                cout << "-";
            }
        }
        cout << endl;
    }
    return 0;
}
