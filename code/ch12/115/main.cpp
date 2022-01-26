#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            int number = 2 * i + 1;
            for (int j = 0; j < 5; j++) {
                if (i + j >= 4) {
                    cout << number;
                    number--;
                }
                else {
                    cout << "-";
                }
            }
            cout << endl;
        }
        else {
            int number = 1;
            for (int j = 0; j < 5; j++) {
                if (i + j >= 4) {
                    cout << number;
                    number++;
                }
                else {
                    cout << "-";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
