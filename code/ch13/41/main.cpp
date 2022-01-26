#include <iostream>

using namespace std;

bool isTriangle(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    cout << isTriangle(5, 3, 4);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ isTriangle ที่รับ parameter เป็น a, b และ c
บรรทัดที่ 06-08 : ถ้า 2 ด้านของสามเหลี่ยมรวมกันแล้ว น้อยกว่าหรือเท่ากับ อีกด้านหนึ่งของสามเหลี่ยม return false
บรรทัดที่ 09-11 : ถ้าเป็นเงื่อนไข if เป็นเท็จ return true

บรรทัดที่ 14 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 15 : print ค่าที่ได้จาก isTriangle(5, 3, 4)
บรรทัดที่ 16 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/