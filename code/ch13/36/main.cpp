#include <iostream>

using namespace std;

void drawTree2(int n) {
    int row = n % 2 == 0 ? n - 1 : n;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < n; j++) {
            if (j == abs((n - 1) / 2 - i) || j == n - 1 - abs((n - 1) / 2 - i)) {
                cout << 'x';
            }
            else {
                cout << '-';
            }
        }
        cout << endl;
    } 
}

int main() {
    drawTree2(6);
    return 0;
}

/*
เหมือนบท 12 ข้อ 107
*/