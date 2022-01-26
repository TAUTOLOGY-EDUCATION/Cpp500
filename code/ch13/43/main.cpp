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

vector<string> delExceedLen(vector<string> arrayA, int n) {
    vector<string> remainArray;
    for (string a: arrayA) {
        if (a.size() <= n) {
            remainArray.push_back(a);
        }
    }
    return remainArray;
}

int main() {
    vector<string> A {"Hello", "Hel", "Hell", "He", "H"};
    print(delExceedLen(A, 3));
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

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ delExceedLen ที่รับ parameter เป็น arrayA และ n
บรรทัดที่ 18 : สร้างตัวแปรชื่อ remainArray และกำหนดให้เป็น empty array
บรรทัดที่ 19 : พิจารณาสมาชิกแต่ละตัวใน A
บรรทัดที่ 20-22 : ถ้าความยาวของสมาชิกน้อยกว่าหรือเท่ากับ n ก็จะนำไปใส่ใน remainArray
บรรทัดที่ 23 : return remainArray ออกมา

บรรทัดที่ 27 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 28 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {"Hello", "Hel", "Hell", "He", "H"}
บรรทัดที่ 29 : print ค่าที่ได้จาก delExceedLen(A, 3)
บรรทัดที่ 30 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/