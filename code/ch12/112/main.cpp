#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 10; i++) {
        int number = 1;
        for (int j = 1; j < 10; j++) {
            if (i + j >= 10) {
                cout << number;
                number += 1;
            }
            else {
                cout << "-";
            } 
        }
        cout << endl;
    }
    return 0;
}
