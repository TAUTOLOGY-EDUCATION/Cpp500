#include <iostream>

using namespace std;

void drawTree(int n) {
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           if (i == j || i + j == n - 1) {
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
    drawTree(5);
    return 0;
}

/*
เหมือนบท 12 ข้อ 106
*/