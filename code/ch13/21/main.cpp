#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double calculateR(double PV, double FV, int n) {
    return (pow(FV / PV, 1.0 / n) - 1) * 100;
}

int main() {
    cout << fixed << setprecision(15);
    cout << calculateR(1000, 1440, 2);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h
บรรทัดที่ 03 : import library ชื่อ iomanip
บรรทัดที่ 05 : import library ชื่อ standard namespace

บรรทัดที่ 07 : ประกาศฟังก์ชันชื่อ calculateR ที่รับ parameter เป็น PV, FV และ n
บรรทัดที่ 08 : return r สำหรับหาอัตราผลตอบแทน ซึ่งคำนวณได้ตามสูตรข้างต้น ออกมา

บรรทัดที่ 11 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 12 : กำหนดให้การ print จำนวนจริง เป็นทศนิยม 15 ตำแหน่ง
บรรทัดที่ 13 : print ค่าที่ได้จาก calculateR(1000, 1440, 2)
บรรทัดที่ 14 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/