#include <iostream>
#include <math.h>

using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (j == abs(3 - i) || j == 6 - abs(3 - i)) {
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
