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

vector<int> findCusum(vector<int> arrayA) {
    int cusum = 0;
    vector<int> cusumArray;
    for (int i: arrayA) {
        cusum += i;
        cusumArray.push_back(cusum);
    }
    return cusumArray;
}

int main() {
    vector<int> A {8, 0, -2, 4};
    print(findCusum(A));
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

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ findCusum ที่รับ parameter เป็น arrayA 
บรรทัดที่ 18 : สร้างตัวแปรชื่อ cusum และกำหนดให้เป็น 0
บรรทัดที่ 19 : สร้างตัวแปรชื่อ cusumArray และกำหนดให้เป็น empty array
บรรทัดที่ 20 : พิจารณาสมาชิกของ arrayA แต่ละตัว
บรรทัดที่ 21 : รวมผลบวกสะสมไว้ใน cusum
บรรทัดที่ 22 : นำผลบวกสะสมไปใส่ใน cusumArray
บรรทัดที่ 24 : return cusumArray ออกมา

บรรทัดที่ 27 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 28 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {8, 0, -2, 4}
บรรทัดที่ 29 : print ค่าที่ได้จาก findCusum(A)
บรรทัดที่ 30 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/