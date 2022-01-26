#include <iostream>

using namespace std;

double sale(int price, int discount) {
    return price * (100.0 - discount) / 100;
}

int main() {
    cout << "Discounted Price = " << sale(1000, 20);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ sale ที่รับ parameter เป็น price และ discount
บรรทัดที่ 06 : return ราคาหลังหักส่วนลดแล้ว

บรรทัดที่ 09 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 10 : print ค่าที่ได้จาก sale(1000, 20)
บรรทัดที่ 11 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/