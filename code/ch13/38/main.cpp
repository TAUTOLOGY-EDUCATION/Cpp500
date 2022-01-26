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

vector<int> _plus(vector<int> arrayA, vector<int> arrayB) {
   vector<int> result;
   for (int i = 0; i < arrayA.size(); i++) {
       result.push_back(arrayA[i] + arrayB[i]);
   }
   return result;
}

vector<int> _cross(vector<int> arrayA, vector<int> arrayB) {
   vector<int> result;
   for (int i = 0; i < arrayA.size(); i++) {
       result.push_back(arrayA[i] * arrayB[i]);
   }
   return result;
}

int main() {
    vector<int> A {1, 2, 3};
    vector<int> B {6, 7, 8};
    print(_plus(A, B));
    print(_cross(A, B));
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

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ _plus ที่รับ parameter เป็น arrayA และ arrayB
บรรทัดที่ 18 : สร้างตัวแปรชื่อ result และกำหนดให้เป็น empty array
บรรทัดที่ 19-21 : พิจารณาค่า i ตั้งแต่ 0 ถึง arrayA.size()-1 หาผลบวกของสมาชิกตำแหน่งที่ i ของ arrayA และ arrayB แล้วนำไปใส่ใน result
บรรทัดที่ 22 : return result ออกมา

บรรทัดที่ 25 : ประกาศฟังก์ชันชื่อ _cross ที่รับ parameter เป็น arrayA และ arrayB
บรรทัดที่ 26 : สร้างตัวแปรชื่อ result และกำหนดให้เป็น empty array
บรรทัดที่ 27-29 : พิจารณาค่า i ตั้งแต่ 0 ถึง arrayA.size()-1 หาผลคูณของสมาชิกตำแหน่งที่ i ของ arrayA และ arrayB แล้วนำไปใส่ใน result
บรรทัดที่ 30 : return result ออกมา

บรรทัดที่ 33 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 34 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {1, 2, 3}
บรรทัดที่ 35 : สร้างตัวแปรชื่อ B และกำหนดให้เป็น {6, 7, 8}
บรรทัดที่ 36 : print ค่าที่ได้จาก _plus(A, B)
บรรทัดที่ 37 : print ค่าที่ได้จาก _cross(A, B)
บรรทัดที่ 38 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/