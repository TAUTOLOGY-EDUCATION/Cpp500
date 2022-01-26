#include <iostream>

using namespace std;

int main() {
    int number; 
    cout << "Please insert number: ";
    cin >> number;
    if (number > 0) {
        cout << "greater than 0";
    }
    else {
        cout << "less than or equal to 0";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ number เพื่อเก็บจำนวนเต็ม
บรรทัดที่ 07 : พิมพ์ "Please insert number: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนเต็มและกำหนดค่าใส่ตัวแปรชื่อ number
บรรทัดที่ 09-11 : ถ้า number มากกว่า 0 ให้พิมพ์ "greater than 0"
บรรทัดที่ 12-14 : ถ้า number น้อยกว่าหรือเท่ากับ 0 ให้พิมพ์ "less than or equal to 0"

บรรทัดที่ 15 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-15.
Line 6 : declare an interger varible name number.
Line 7 : print "Please insert number: ".
Line 8 : Takes integer as an input and assigns it to a variable named number.
Line 9-11 : If number is greater than 0, print "greater than 0".
Line 12-14 : If number is less than or equal to 0, print "less than or equal to 0".
Line 15 : Return 0 means that the program will execute successfully.
*/