#include <iostream>
#include <math.h>

using namespace std;

double calculateFV(double PV, double r, int n) {
    return  PV * pow(1 + r / 100, n);
}

int main() {
    cout << calculateFV(1000, 20, 2);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ calculateFV ที่รับ parameter เป็น PV, r และ n
บรรทัดที่ 07 : return FV สำหรับหาเงินลงทุนรวม ซึ่งคำนวณได้ตามสูตรข้างต้น ออกมา

บรรทัดที่ 10 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 11 : print ค่าที่ได้จาก calculateFV(1000, 20, 2)
บรรทัดที่ 12 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/