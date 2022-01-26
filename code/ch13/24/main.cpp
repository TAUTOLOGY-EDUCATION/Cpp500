#include <iostream>
#include <math.h>

using namespace std;

double distanceR2(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return distance;
}

int main() {
    cout << distanceR2(3, 4, 6, 8);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ distanceR2 ที่รับ parameter เป็น x1, y1, x2 และ y2
บรรทัดที่ 07 : สร้างตัวแปรชื่อ distance สำหรับหาระยะห่าง ซึ่งคำนวณได้ตามสูตรข้างต้น
บรรทัดที่ 08 : return distance ออกมา

บรรทัดที่ 11 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 12 : print ค่าที่ได้จาก distanceR2(3, 4, 6, 8)
บรรทัดที่ 13 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/