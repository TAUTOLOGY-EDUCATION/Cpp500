#include <iostream>
#include <math.h>

using namespace std;

double frogJump(double d, double s) {
    return ceil(d / s);
}

int main() {
    cout << frogJump(10, 2);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ frogJump ที่รับ parameter เป็น d และ s
บรรทัดที่ 07 : return ผลหารระหว่างระยะทางที่ต้องการกระโดด กับ ระยะทางที่ได้จากการกระโดด 1 ครั้ง แล้วทำการปัดเศษขึ้น

บรรทัดที่ 10 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 11 : print ค่าที่ได้จาก frogJump(10, 2)
บรรทัดที่ 12 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/