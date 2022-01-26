#include <iostream>
#include <regex>

using namespace std;

string delSpecialChar(string str1) {
    vector<string> specialChar {"!", "@", "#", "\\\\", "\\$", "%", ","};
    for (string c: specialChar) {
        str1 = regex_replace(str1, regex(c), "");
    }
    return str1;
}

int main() {
    cout << delSpecialChar("chicken%");
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ regex
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ delSpecialChar ที่รับ parameter เป็น str1
บรรทัดที่ 07 : สร้างตัวแปรชื่อ specialChar และกำหนดค่าเท่ากับ {"!", "@", "\\\\", "%", ","} เพื่อเก็บอักขระพิเศษ
บรรทัดที่ 08-10 : พิจารณาอักขระพิเศษแต่ละตัว และ แทนที่อักขระพิเศษที่ปรากฏใน str1 ด้วย empty string
บรรทัดที่ 11 : return str1 ที่ลบอักขระพิเศษออกแล้ว

บรรทัดที่ 17 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 18 : delSpecialChar("chicken%")
บรรทัดที่ 19 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/