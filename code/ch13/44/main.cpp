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

vector<int> derivative(vector<int> arrayA) {
    vector<int> diff(arrayA.size(), 0);
    for (int i = 1; i < arrayA.size(); i++) {
        diff[i - 1] = arrayA[i] * i;
    }
    return diff;
}

int main() {
    vector<int> A {2, 3, 0, 1};
    print(derivative(A));
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

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ derivative ที่รับ parameter เป็น arrayA
บรรทัดที่ 18 : สร้างตัวแปรชื่อ diff และกำหนดให้ มีขนาดเท่ากับ arrayA มีค่าเริ่มต้นเป็น 0 ในทุกตัว
บรรทัดที่ 19 : พิจารณา index ใน arrayA โดยเริ่มจาก index 1 จนถึงสุดท้าย เนื่องจาก index 0 จะทำการ diff แล้วมีค่าเป็น 0 เสมอ เพราะเป็นค่าคงที่
บรรทัดที่ 20 : เก็บสัมประสิทธิ์ของค่า derivatives ใส่ใน diff
บรรทัดที่ 22 : return diff ออกมา

บรรทัดที่ 25 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 26 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {2, 3, 0, 1}
บรรทัดที่ 27 : print ค่าที่ได้จาก derivative(A)
บรรทัดที่ 28 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/