#include <iostream>
#include <map>

using namespace std;

string toHexadecimal(int x) {
    map<int, char> converter;
    for (int i = 0; i < 16; i++) {
        if (i < 10) {
            converter[i] = '0' + i;
        }
        else {
            converter[i] = 'A' + i - 10;
        }
    }
    string hex = "";
    while (x > 0) {
        hex = converter[x % 16] + hex;
        x /= 16;
    }
    return hex;
}

int main() {
    cout << toHexadecimal(318);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ map
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ toHexadecimal ที่รับ parameter เป็น x
บรรทัดที่ 07 : สร้างตัวแปรชื่อ converter และมีค่าเริ่มต้นเท่ากับ empty map
บรรทัดที่ 08-15 : ทำการวนลูปเพื่อกำหนดค่าให้ตัวแปร converter = {0: '0', 1: '1', ..., 14: 'E', 15: 'F'}
บรรทัดที่ 16 : สร้างตัวแปรชื่อ hex และกำหนดค่าเท่ากับ empty string
บรรทัดที่ 17-20 : แปลงเลขฐาน 10 ไปเป็น ฐาน 16 เก็บค่าไว้ในตัวแปร hex
บรรทัดที่ 21 : return hex ออกมา

บรรทัดที่ 24 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 25 : print ค่าที่ได้จาก toHexadecimal(318)
บรรทัดที่ 26 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/