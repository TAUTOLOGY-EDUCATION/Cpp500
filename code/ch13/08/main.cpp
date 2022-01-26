#include <iostream>

using namespace std;

string concatTwoString(string str1, string str2) {
    return str1 + str2;
}

int main() {
    cout << concatTwoString("Goo", "gle");
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ concatTwoString ที่รับ parameter เป็น str1 และ str2
บรรทัดที่ 06 : return ผลบวกของ str1 และ str2 (การบวกกันของ string คือ การนำมาต่อกัน)

บรรทัดที่ 09 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 10 : print ค่าที่ได้จาก concatTwoString("Goo", "gle")
บรรทัดที่ 11 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/