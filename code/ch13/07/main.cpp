#include <iostream>
#include <vector>

using namespace std;

double sumArray(vector<double> arrayA) {
    double sumx = 0;
    for (double a: arrayA) {
        sumx = sumx + a;
    }
    return sumx;
}

int main() {
    vector<double> A {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << sumArray(A);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ sumArray ที่รับ parameter เป็น arrayA 
บรรทัดที่ 07 : สร้างตัวแปรชื่อ sumx และกำหนดค่าเท่ากับ 0
บรรทัดที่ 08-10 : นำสมาชิกแต่ละตัวใน arrayA ไปบวกเพิ่มที่ sumx
บรรทัดที่ 11 : return sumx ออกมา

บรรทัดที่ 14 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 15 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {1.1, 2.2, 3.3, 4.4, 5.5}
บรรทัดที่ 16 : print ค่าที่ได้จาก sumArray(A)
บรรทัดที่ 17 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/