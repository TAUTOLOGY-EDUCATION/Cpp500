#include <iostream>
#include <vector>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]" << endl;
}

vector<int> shiftLeft(vector<int> arrayA, int k) {
    vector<int> shiftArrayA;
    k %= arrayA.size();
    int n = arrayA.size();
    for (int i = k; i < n; i++) {
        shiftArrayA.push_back(arrayA[i]);
    }
    for (int i = 0; i < k; i++) {
        shiftArrayA.push_back(arrayA[i]);
    }
    return shiftArrayA;
}

int main() {
    print(shiftLeft({1, 2, 3, 4, 5}, 1));
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ print ที่รับ parameter เป็น a 
บรรทัดที่ 07 : print "["
บรรทัดที่ 08-13 : print สมาชิกใน a แต่ละตัว แล้วคั่นด้วย comma (,)
บรรทัดที่ 14 : print "]"

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ shiftLeft ที่รับ parameter เป็น arrayA และ k
บรรทัดที่ 18 : สร้างตัวแปรชื่อ shiftArrayA และกำหนดค่าเท่ากับ empty array
บรรทัดที่ 19 : ทำการ mod k ด้วยความยาวของ arrayA (เนื่องจากถ้าจำนวนครั้งที่ทำการ rotate ไปเท่ากับจำนวนสมาชิกใน arrayA จะทำให้สมาชิกกลับมาอยู่ที่เดิม)
บรรทัดที่ 20 : สร้างตัวแปรชื่อ n และกำหนดค่าเท่ากับ ขนาดของ arrayA
บรรทัดที่ 21-26 : ทำการ shift left arrayA แล้วเก็บค่าไว้ใน shiftArrayA
บรรทัดที่ 27 : return shiftArrayA

บรรทัดที่ 30 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 31 : print ค่าที่ได้จาก shiftLeft({1, 2, 3, 4, 5}, 1)
บรรทัดที่ 32 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/