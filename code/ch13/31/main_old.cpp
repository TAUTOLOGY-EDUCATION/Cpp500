#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> listA) {
    int min = listA[0];
    for (int i: listA) {
        if (i < min) {
            min = i;
        }
    }
    return min;
}

int findMax(vector<int> listA) {
    int max = listA[0];
    for (int i: listA) {
        if (i > max) {
            max = i;
        }
    }
    return max;
}

int main() {
    vector<int> A {19, 1, 32, -18};
    cout << "min = " << findMin(A) << endl;
    cout << "max = " << findMax(A) << endl;
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ findMin ที่รับ parameter เป็น listA
บรรทัดที่ 07 : สร้างตัวแปรชื่อ min และกำหนดให้เป็น สมาชิกตัวแรกของ listA
บรรทัดที่ 08-12 : พิจารณาค่า i ตั้งแต่ 0 ถึง n-1 ถ้าสมาชิกตำแหน่งที่ i ของ listA มีค่าน้อยกว่า min ให้ min เท่ากับสมาชิกตัวนั้น
บรรทัดที่ 13 : return min ออกมา

บรรทัดที่ 16 : ประกาศฟังก์ชันชื่อ findMax ที่รับ parameter เป็น listA
บรรทัดที่ 17 : สร้างตัวแปรชื่อ max และกำหนดให้เป็น สมาชิกตัวแรกของ listA
บรรทัดที่ 18-22 : พิจารณาค่า i ตั้งแต่ 0 ถึง n-1 ถ้าสมาชิกตำแหน่งที่ i ของ listA มีค่ามากกว่า max ให้ max เท่ากับสมาชิกตัวนั้น
บรรทัดที่ 23 : return max ออกมา

บรรทัดที่ 26 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 27 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {19, 1, 32, -18}
บรรทัดที่ 28 : print ค่าที่ได้จาก findMin(A)
บรรทัดที่ 29 : print ค่าที่ได้จาก findMax(A)
บรรทัดที่ 30 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/