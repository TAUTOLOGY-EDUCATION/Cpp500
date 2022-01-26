#include <iostream>

using namespace std;

int main() {
    int width, length; 
    cout << "Please insert width: ";
    cin >> width;
    cout << "Please insert length: ";
    cin >> length;
    if (width <= 0 || length <= 0) {
        cout << "please enter positive integer";
    }
    else {
        int area = width * length;
        cout << area;
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ width และ length เพื่อเก็บจำนวนเต็ม
บรรทัดที่ 07 : พิมพ์ "Please insert width: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนเต็มและกำหนดค่าใส่ตัวแปรชื่อ length
บรรทัดที่ 07 : พิมพ์ "Please insert length: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนเต็มและกำหนดค่าใส่ตัวแปรชื่อ width
บรรทัดที่ 11-13 : ถ้า width หรือ length น้อยกว่าหรือเท่ากับ 0 ให้พิมพ์ "please enter positive integer"
บรรทัดที่ 14 : ถ้าไม่ใช่ ให้ทำบรรทัดที่ 15-16
บรรทัดที่ 15 : สร้างตัวแปรชื่อ area และกำหนดค่าเท่ากับ width*length
บรรทัดที่ 16 : พิมพ์ค่า area ออกมา

บรรทัดที่ 18 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-19.

Line 6 : declare an interger varible name width, length.
Line 7 : print "Please insert width: ".
Line 8 : Takes integer as an input and assigns it to a variable named width.
Line 9 : print "Please insert length: ".
Line 10 : Takes integer as an input and assigns it to a variable named length.

Line 11-13 : If width or length is less than or equal to 0, print "please enter positive integer".
Line 14 : Else, follow line 15-16.
Line 15 : Create a variable named area and set a value equal to width*length.
Line 16 : print the value of area.

Line 18 : Return 0 means that the program will execute successfully.
*/