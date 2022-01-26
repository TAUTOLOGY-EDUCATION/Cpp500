#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

double distanceRn(vector<double> P1, vector<double> P2) {
    double sumSquare = 0;
    for (int i = 0; i < P1.size(); i++) {
        sumSquare += pow(P1[i] - P2[i], 2);
    }
    double distance = sqrt(sumSquare);
    return distance;
}

int main() {
    vector <double> A {1, 2, 2, 1};
    vector <double> B {3, 4, 0, -1};
    cout << distanceRn(A, B);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ math.h
บรรทัดที่ 03 : import library ชื่อ vector
บรรทัดที่ 05 : import library ชื่อ standard namespace

บรรทัดที่ 07 : ประกาศฟังก์ชันชื่อ distanceRn ที่รับ parameter เป็น P1 และ P2
บรรทัดที่ 08 : สร้างตัวแปรชื่อ sumSquare และกำหนดค่าเท่ากับ 0
บรรทัดที่ 09-11 : พิจารณาค่า i ตั้งแต่ 0 ถึง P1.size()-1 นำผลต่างของ P1 และ P2 ในตำแหน่งทื่ i ไปยกกำลังสองแล้ว นำไปบวกเพิ่มที่ sumSquare
บรรทัดที่ 12 : สร้างตัวแปรชื่อ distance สำหรับหาระยะห่าง ซึ่งคำนวณได้ตามสูตรข้างต้น
บรรทัดที่ 13 : return distance ออกมา

บรรทัดที่ 16 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 17 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {1, 2, 2, 1}
บรรทัดที่ 18 : สร้างตัวแปรชื่อ B และกำหนดให้เป็น {3, 4, 0, -1}
บรรทัดที่ 19 : print ค่าที่ได้จาก distanceRn(A, B)
บรรทัดที่ 20 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

