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

vector<int> findIndex(vector<int> arrayA, int k) {
    vector<int> indexArray;
    for (int i = 0; i < arrayA.size(); i++) {
        if(arrayA[i] == k) {
            indexArray.push_back(i);
        }
    }
    if (indexArray.size() == 0) {
        indexArray.push_back(-1);
    }
    return indexArray;
}

int main() {
    vector<int> A {2, 4, 6, 8, 12};
    print(findIndex(A, 4));
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

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ findIndex ที่รับ parameter เป็น arrayA และ k
บรรทัดที่ 18 : สร้างตัวแปรชื่อ indexArray และกำหนดให้เป็น empty array
บรรทัดที่ 19-23 : พิจารณาค่า i ตั้งแต่ 0 ถึง n-1 ถ้าสมาชิกตำแหน่งที่ i ของ arrayA มีค่าเท่ากับ k ให้นำ i ไปใส่ใน indexArray
บรรทัดที่ 24-26 : ถ้า indexArray เป็น empty array ให้นำ -1 ใส่ใน indexArray
บรรทัดที่ 27 : return indexArray ออกมา

บรรทัดที่ 30 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 31 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {2, 4, 6, 8, 12}
บรรทัดที่ 32 : print ค่าที่ได้จาก findIndex(A, 4)
บรรทัดที่ 33 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/