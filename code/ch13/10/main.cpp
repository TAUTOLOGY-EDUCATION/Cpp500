#include <iostream>
#include <regex>

using namespace std;

string delWord(string str1, string str2) {
    return regex_replace(str1, regex(str2), "");
}

int main() {
    cout << delWord("onetwothree", "two");
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ regex
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ delWord ที่รับ parameter เป็น str1 และ str2
บรรทัดที่ 07 : return str1 ที่ถูกแทนที่ str2 ด้วย empty string

บรรทัดที่ 10 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 11 : print ค่าที่ได้จาก delWord("onetwothree", "two")
บรรทัดที่ 12 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/