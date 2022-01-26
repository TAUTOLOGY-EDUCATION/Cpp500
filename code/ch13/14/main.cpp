#include <iostream>
#include <math.h>

using namespace std;

int distanceR1(int x1, int x2) {
    return abs(x1 - x2);
}

int main() {
    cout << distanceR1(32, -18);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h

บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ distanceR1 ที่รับ parameter เป็น x1 และ x2
บรรทัดที่ 07 : return ค่า absolute ของผลต่างระหว่าง x1 และ x2

บรรทัดที่ 10 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 11 : print ค่าที่ได้จาก distanceR1(32, -18)
บรรทัดที่ 12 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/