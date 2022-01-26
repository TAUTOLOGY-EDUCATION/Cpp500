#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == j || i + j == 6) {
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
