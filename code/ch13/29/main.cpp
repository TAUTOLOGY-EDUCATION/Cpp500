#include <iostream>
#include <algorithm>

using namespace std;

string toBinary(int x) {
    string binary = "";
    while (x > 0) {
        binary = (char)('0' + (x % 2)) + binary;
        x /= 2;
    }
    return binary;
}

int main() {
    cout << toBinary(13);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ algorithm
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ toBinary ที่รับ parameter เป็น x
บรรทัดที่ 07 : สร้างตัวแปรชื่อ binary และมีค่าเริ่มต้นเท่ากับ empty string
บรรทัดที่ 08-11 : แปลงเลขฐาน 10 ไปเป็น ฐาน 2 เก็บค่าไว้ในตัวแปร binary
บรรทัดที่ 12 : return binary ออกมา

บรรทัดที่ 15 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 16 : print ค่าที่ได้จาก toBinary(13)
บรรทัดที่ 17 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/