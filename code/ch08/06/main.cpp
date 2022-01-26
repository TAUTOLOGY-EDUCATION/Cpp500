#include <iostream>

using namespace std;

int main() {
    int AD; 
    cout << "Please insert AD: ";
    cin >> AD;
    if (AD >= 0) {
        int BE = AD + 543;
        cout << BE;
    }
    else {
        cout << "please enter a number that is greater than or equal to 0";
    }
    return 0;
}


/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ AD เพื่อเก็บจำนวนเต็ม
บรรทัดที่ 07 : พิมพ์ "Please insert AD: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนเต็มและกำหนดค่าใส่ตัวแปรชื่อ AD
บรรทัดที่ 09 : ถ้า AD มากกว่าเท่ากับ 0 ให้ทำบรรทัดที่ 10-11
บรรทัดที่ 10 : สร้างตัวแปรชื่อ BE และกำหนดค่าเท่ากับ AD + 543
บรรทัดที่ 11 : พิมพ์ค่า BE ออกมา
บรรทัดที่ 13-15 : ถ้า AD น้อยกว่า 0 ให้พิมพ์ "please enter a number that is greater than or equal to 0"

บรรทัดที่ 16 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-16.

Line 6 : declare an interger varible name AD
Line 7 : print "Please insert AD: ".
Line 8 : Takes integer as an input and assigns it to a variable named AD.

Line 9 : If AD is greater than or equal to 0, follow line 10-11
Line 10 : Create a variable named BE and set a value equal to AD + 543.
Line 11 : print the value of BE.
Line 13-15 : If AD is less than 0, print "please enter a number that is greater than or equal to 0".

Line 16 : Return 0 means that the program will execute successfully.
*/