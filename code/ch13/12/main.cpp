#include <iostream>
#include <vector>

using namespace std;

int sumLen(vector<string> arrayA) {
    int sumx = 0;
    for (string s: arrayA) {
        sumx += s.length();
    }
    return sumx;
}

int main() {
    vector<string> A {"food", "drink", "snack", "vegetable"};
    cout << sumLen(A);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ sumLen ที่รับ parameter เป็น arrayA 
บรรทัดที่ 07 : สร้างตัวแปรชื่อ sumx และกำหนดให้เป็น 0
บรรทัดที่ 08-10 : พิจารณาสมาชิกแต่ละตัวของ arrayA ในชื่อตัวแปร s นำความยาวของ a ไปบวกเพิ่มที่ sumx
บรรทัดที่ 11 : return sumx ออกมา

บรรทัดที่ 14 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 15 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {"food", "drink", "snack", "vegetable"}
บรรทัดที่ 16 : print ค่าที่ได้จาก sumLen(A)
บรรทัดที่ 17 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/