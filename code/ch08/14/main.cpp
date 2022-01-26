#include <iostream>

using namespace std;

int main() {
    int number; 
    cout << "Please insert number: ";
    cin >> number;
    if (number % 3 == 0 || number % 5 == 0) {
        cout << "divisible by 3 or 5";
    }
    else {
        cout << "not divisible by 3 or 5";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ number เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert number: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ number
บรรทัดที่ 09-11 : ถ้า number หารด้วย 3 หรือ 5 ลงตัว ให้พิมพ์ "divisible by 3 or 5"
บรรทัดที่ 12-14 :  ถ้า number หารด้วย 3 หรือ 5 ไม่ลงตัว ให้พิมพ์ "not divisible by 3 or 5"

บรรทัดที่ 15 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-15.

Line 6 : declare an interger varible name number
Line 7 : print "Please insert number: ".
Line 8 : Takes interger as an input and assigns it to a variable named number.

Line 9-11 : If number is divisible by 3 or 5, print "divisible by 3 or 5".
Line 12-14 : If number is not divisible by 3 or 5, print "not divisible by 3 or 5".

Line 15 : Return 0 means that the program will execute successfully.
*/