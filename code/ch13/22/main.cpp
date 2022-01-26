#include <iostream>

using namespace std;

int calculator(int a, int b, char op) {
    if (op == '+') {
        return a + b;
    }
    else if (op == '-') {
        return a - b;
    }
    else if (op == '*') {
        return a * b;
    }
    else if (op == '/') {
        return a / b;
    }
}

int main() {
    cout << calculator(5, 2, '*');
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ calculator ที่รับ parameter เป็น a, b และ op
บรรทัดที่ 06-08 : ถ้า op เป็นเครื่องหมายบวก ให้ return a + b
บรรทัดที่ 09-11 : ถ้า op เป็นเครื่องหมายลบ ให้ return a - b
บรรทัดที่ 12-14 : ถ้า op เป็นเครื่องหมายคูณ ให้ return a * b
บรรทัดที่ 15-17 : ถ้า op เป็นเครื่องหมายหาร ให้ return a / b

บรรทัดที่ 20 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 21 : print ค่าที่ได้จาก calculator(5, 2, '*')
บรรทัดที่ 22 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/