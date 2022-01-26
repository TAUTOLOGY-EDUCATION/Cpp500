#include <iostream>

using namespace std;

string concatThreeString(string str1, string str2, string str3) {
    return str1 + str2 + str3;
}

int main() {
    cout << concatThreeString("A", "ma", "zon");
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ concatThreeString ที่รับ parameter เป็น str1, str2 และ str3
บรรทัดที่ 06 : return ผลบวกของ str1, str2 และ str3 (การบวกกันของ string คือการนำมาต่อกัน)

บรรทัดที่ 09 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 10 : print ค่าที่ได้จาก concatThreeString("A", "ma", "zon")
บรรทัดที่ 11 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/