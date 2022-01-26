#include <iostream>

using namespace std;

void drawTree3() {
   for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 4 + i; j++) {
           if (j >= 3 - i) {
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
    drawTree3();
    return 0;
}

/*
เหมือนบท 12 ข้อ 110
*/