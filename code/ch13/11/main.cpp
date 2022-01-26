#include <iostream>
#include <regex>

using namespace std;

string repeatWord(string str1, int k) {
    string word = "";
    for (int i = 0; i < k; i++) {
        if (i > 0) {
            word += "-";
        }
        word += str1;
    }
    return word;
}

int main() {
    cout << repeatWord("one", 3);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ regex
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ repeatWord ที่รับ parameter เป็น str1 และ k
บรรทัดที่ 07 : สร้างตัวแปรชื่อ word และกำหนดค่าเท่ากับ empty string
บรรทัดที่ 08-13 : repeat str1 จำนวน k ครั้ง คั่นด้วย '-' เก็บค่าไว้ใน word
บรรทัดที่ 17 : return word

บรรทัดที่ 17 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 18 : print ค่าที่ได้จาก repeatWord("one", 3)
บรรทัดที่ 19 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/