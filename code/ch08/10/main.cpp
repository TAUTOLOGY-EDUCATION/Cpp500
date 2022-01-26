#include <iostream>

using namespace std;

int main() {
    double num1, num2; 
    cout << "Please insert num1: ";
    cin >> num1;
    cout << "Please insert num2: ";
    cin >> num2;
    if (num1 > num2) {
        cout << num1;
    }
    else if (num2 > num1) {
        cout << num2;
    }
    else {
        cout << "equal";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ num1 และ num2 เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert num1: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ num1
บรรทัดที่ 09 : พิมพ์ "Please insert num2: "
บรรทัดที่ 10 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ num2
บรรทัดที่ 11-13 : ถ้า num1 มากกว่า num2 ให้พิมพ์ค่า num1 ออกมา
บรรทัดที่ 14-16 : ถ้า num2 มากกว่า num1 ให้พิมพ์ค่า num2 ออกมา
บรรทัดที่ 17-19 : ถ้า num1 เท่ากับ num2 ให้พิมพ์ "equal"

บรรทัดที่ 20 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-20.

Line 6 : declare double varibles name num1, num2
Line 7 : print "Please insert num1: ".
Line 8 : Takes double as an input and assigns it to a variable named num1.
Line 9 : print "Please insert num2: ".
Line 10 : Takes double as an input and assigns it to a variable named num2.

Line 11-13 : If num1 is greater than num2, print the vaule of num1.
Line 14-16 : If num2 is greater than num1, print the vaule of num2.
Line 17-19 : If num1 is equal to num2, print "equal".

Line 20 : Return 0 means that the program will execute successfully.
*/