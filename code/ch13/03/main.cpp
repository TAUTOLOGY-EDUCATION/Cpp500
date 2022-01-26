#include <iostream>

using namespace std;

int square(int a) {
    return a * a;
}

int main() {
    cout << square(25);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace
บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ square ที่รับ parameter เป็น a 
บรรทัดที่ 06 : return ค่ากำลังสองของ a
บรรทัดที่ 09 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 10 : print ค่าที่ได้จาก square(25)
บรรทัดที่ 11 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/