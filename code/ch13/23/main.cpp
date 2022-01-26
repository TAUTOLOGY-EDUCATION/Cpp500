#include <iostream>
#include <math.h>

using namespace std;

double calculateC(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main() {
    cout << calculateC(3, 4);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ calculateC ที่รับ parameter เป็น a และ b
บรรทัดที่ 07 : return c ความยาวด้านตรงข้ามมุมฉาก ซึ่งคำนวณได้ตามสูตรข้างต้น ออกมา

บรรทัดที่ 10 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 11 : print ค่าที่ได้จาก calculateC(3, 4)
บรรทัดที่ 12 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/