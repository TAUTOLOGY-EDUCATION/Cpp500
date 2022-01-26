#include <iostream>

using namespace std;

int addition(int a, int b) {
    return a + b;
}

int main() {
    cout << addition(18, 32);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ addition ที่รับ parameter เป็น a และ b
บรรทัดที่ 06 : return ค่าผลบวกของ a และ b

บรรทัดที่ 09 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 10 : print ค่าที่ได้จาก addition(18, 32)
บรรทัดที่ 11 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/