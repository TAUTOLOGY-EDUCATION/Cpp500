#include <iostream>

using namespace std;

int main() {
    double F; 
    cout << "Please insert F: ";
    cin >> F;
    if (F >= 32) {
        double C = 5 * (F - 32) / 9;
        cout << C;
    }
    else {
        cout << "cold";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ F เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert F: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ F
บรรทัดที่ 09 : ถ้า F มากกว่าหรือเท่ากับ 32 ให้ทำบรรทัดที่ 10-11
บรรทัดที่ 10 : สร้างตัวแปรชื่อ C และกำหนดค่าเท่ากับ 5*(F-32)/9
บรรทัดที่ 11 : พิมพ์ค่า C ออกมา
บรรทัดที่ 13-15 : ถ้า F น้อยกว่า 32 ให้พิมพ์ "cold"

บรรทัดที่ 16 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-16.

Line 6 : declare an double varible name F
Line 7 : print "Please insert F: ".
Line 8 : Takes double as an input and assigns it to a variable named F.

Line 9 : If F is greater than or equal to 32, follow line 10-11.
Line 10 : Create a variable named C and set a value equal to 5*(F-32)/9.
Line 11 : print the value of C.
Line 13-15 : If F is less than 32, print "cold".

Line 16 : Return 0 means that the program will execute successfully.
*/