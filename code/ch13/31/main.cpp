#include <iostream>
#include <vector>

using namespace std;

void findMinMax(vector<int> arrayA, int &min, int &max) {
    min = arrayA[0];
    max = arrayA[0];
    for (int i: arrayA) {
        if (i < min) {
            min = i;
        }
        if (i > max) {
            max = i;
        }
    }
}

int main() {
    vector<int> A {19, 1, 32, -18};
    int min, max;
    findMinMax(A, min, max);
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ findMinMax ที่รับ parameter เป็น arrayA, min และ max
บรรทัดที่ 07 : สร้างตัวแปรชื่อ min และกำหนดให้เป็น สมาชิกตัวแรกของ arrayA
บรรทัดที่ 08 : สร้างตัวแปรชื่อ max และกำหนดให้เป็น สมาชิกตัวแรกของ arrayA
บรรทัดที่ 09 : พิจารณาสมาชิกแต่ละตัวของ arrayA
บรรทัดที่ 10-12 : ถ้าสมาชิกที่ i ของ arrayA มีค่าน้อยกว่า min ให้ min เท่ากับสมาชิกตัวนั้น
บรรทัดที่ 13-15 : ถ้าสมาชิกที่ i ของ arrayA มีค่ามากกว่า max ให้ max เท่ากับสมาชิกตัวนั้น

บรรทัดที่ 19 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 20 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {19, 1, 32, -18}
บรรทัดที่ 21 : สร้างตัวแปรชื่อ min และ max
บรรทัดที่ 22 : เรียกใช้ฟังก์ชัน findMinMax(A, min, max)
บรรทัดที่ 23 : print min
บรรทัดที่ 24 : print max
บรรทัดที่ 25 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/