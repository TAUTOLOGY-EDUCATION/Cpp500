#include <iostream>

using namespace std;

int main() {
    double a, b, c; 
    cout << "Please insert a: ";
    cin >> a;
    cout << "Please insert b: ";
    cin >> b;
    cout << "Please insert c: ";
    cin >> c;
    if (a + b > c) {
        cout << "a + b > c";
    }
    return 0;
}


/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ a, b และ c เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert a: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ a
บรรทัดที่ 09 : พิมพ์ "Please insert b: "
บรรทัดที่ 10 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ b
บรรทัดที่ 11 : พิมพ์ "Please insert c: "
บรรทัดที่ 12 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ c
บรรทัดที่ 13-15 : ถ้า a+b มากกว่า c ให้พิมพ์ "a + b > c"

บรรทัดที่ 16 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-16.

Line 6 : declare double varibles name a, b, c
Line 7 : print "Please insert a: ".
Line 8 : Takes double as an input and assigns it to a variable named a.
Line 9 : print "Please insert b: ".
Line 10 : Takes double as an input and assigns it to a variable named b.
Line 11 : print "Please insert c: ".
Line 12 : Takes double as an input and assigns it to a variable named c.

Line 13-15 : If a+b is greater than c, print "a + b > c".

Line 16 : Return 0 means that the program will execute successfully.
*/