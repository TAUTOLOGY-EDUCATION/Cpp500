#include <iostream>

using namespace std;

string switchCase(string word) {
    string result = "";
    for (int i = 0; i < word.size(); i++) {
        if ('A' <= word[i] && word[i] <= 'Z') {
            result += word[i] - 'A' + 'a';
        }
        else if ('a' <= word[i] && word[i] <= 'z') {
            result += word[i] - 'a' + 'A';
        }
        else {
            result += word[i];
        }
    }
    return result;
}

int main() {
    cout << switchCase("My Name Is John Doe");
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ switchCase ที่รับ parameter เป็น word
บรรทัดที่ 06 : สร้างตัวแปรชื่อ result และกำหนดให้เป็น empty string
บรรทัดที่ 07 : พิจารณาค่า i ตั้งแต่ 0 ถึง จำนวนอักษรในสตริง - 1
บรรทัดที่ 08-10 : ถ้าอักขระเป็น upper case จะนำ lower case ของอักขระไปใส่ใน result
บรรทัดที่ 11-13 : ถ้าอักขระเป็น lower case จะนำ upper case ของอักขระไปใส่ใน result
บรรทัดที่ 14-16 : ถ้าอักขระ ไม่เป็น ตัวอักษรภาษาอังกฤษ จะนำอักขระไปใส่ใน result
บรรทัดที่ 18 : return result ออกมา

บรรทัดที่ 21 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 22 : print ค่าที่ได้จาก switchCase("My Name Is John Doe")
บรรทัดที่ 23 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/