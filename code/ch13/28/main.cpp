#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int toDecimal(string s, int b) {
    map<char, int> converter;
    for (int i = 0; i < 16; i++) {
        if (i < 10) {
            converter['0' + i] = i;
        }
        else {
            converter['A' + i - 10] = i;
        }
    }
    int decimal = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        decimal += converter[s[i]] * pow(b, s.size() - i - 1);
    }
    return decimal;
}

int main() {
    cout << toDecimal("71A", 16);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h
บรรทัดที่ 03 : import library ชื่อ map
บรรทัดที่ 05 : import library ชื่อ standard namespace

บรรทัดที่ 07 : ประกาศฟังก์ชันชื่อ toDecimal ที่รับ parameter เป็น s และ b
บรรทัดที่ 08 : สร้างตัวแปรชื่อ converter และมีค่าเริ่มต้นเท่ากับ empty map
บรรทัดที่ 09-16 : ทำการวนลูปเพื่อกำหนดค่าให้ตัวแปร converter = {'0': 0, '1': 1, ..., 'E': 14, 'F': 15}
บรรทัดที่ 17 : สร้างตัวแปรชื่อ decimal และกำหนดค่าเท่ากับ 0 เพื่อเก็บค่าที่แปลงเป็นฐานสิบแล้ว
บรรทัดที่ 18-20 : แปลงค่าในแต่ละหลักมาเป็นฐานสิบแล้วนำไปบวกรวมกัน
บรรทัดที่ 21 : return ค่าฐานสิบ

บรรทัดที่ 24 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 25 : print ค่าที่ได้จาก toDecimal("71A", 16)
บรรทัดที่ 26 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/