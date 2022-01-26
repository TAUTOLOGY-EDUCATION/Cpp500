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
    cout << "]";
}

void print2d(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        print(a[i]);
    }
    cout << "]";
}

vector< vector<int> > reshape(vector<int> arrayA, int row, int col) {
    vector< vector<int> > matrixA(row, vector<int>(col, 0));
    int i = 0;
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            matrixA[r][c] = arrayA[i];
            i++;
        }
    }
    return matrixA;
}

int main() {
    vector<int> A {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    print2d(reshape(A, 4, 3));
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

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ print2d ที่รับ parameter เป็น a 
บรรทัดที่ 18 : print "["
บรรทัดที่ 19-24 : print สมาชิกใน a แต่ละตัว แล้วคั่นด้วย comma (,)
บรรทัดที่ 25 : print "]"

บรรทัดที่ 28 : ประกาศฟังก์ชันชื่อ reshape ที่รับ parameter เป็น arrayA, row และ col
บรรทัดที่ 29 : สร้างตัวแปรชื่อ matrixA และกำหนดให้ มีขนาดเท่ากับ row x col มีค่าเริ่มต้นเป็น 0 ในทุกตัว
บรรทัดที่ 30 : สร้างตัวแปรชื่อ i และกำหนดให้มีค่าเป็น 0
บรรทัดที่ 31 : พิจารณาค่า r ตั้งแต่ 0 ถึง row - 1
บรรทัดที่ 32 : พิจารณาค่า c ตั้งแต่ 0 ถึง col - 1
บรรทัดที่ 33 : แปลง 1D array เป็น 2D array
บรรทัดที่ 34 : เพิ่มค่า i ซึ่งเป็น index ของ arrayA ไปอีก 1
บรรทัดที่ 37 : return matrixA

บรรทัดที่ 40 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 41 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
บรรทัดที่ 42 : print ค่าที่ได้จาก reshape(A, 4, 3)
บรรทัดที่ 43 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/