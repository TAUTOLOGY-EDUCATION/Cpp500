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

vector<int> squareList(vector<int> arrayA) {
    vector<int> square;
    for (int a: arrayA) {
        square.push_back(a * a);
    }
    return square;
}

int main() {
    vector<int> A {1, 2, 3, 4, 5};
    print(squareList(A));
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

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ squareList ที่รับ parameter เป็น arrayA 
บรรทัดที่ 18 : สร้างตัวแปรชื่อ square และกำหนดให้เป็น empty array
บรรทัดที่ 19-21 : นำสมาชิกแต่ละตัวใน arrayA มายกกำลังสอง แล้วนำไปใส่ใน square
บรรทัดที่ 22 : return square ออกมา

บรรทัดที่ 25 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 26 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {1, 2, 3, 4, 5}
บรรทัดที่ 27 : print ค่าที่ได้จาก squareList(A)
บรรทัดที่ 28 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/