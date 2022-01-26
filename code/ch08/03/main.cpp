#include <iostream>

using namespace std;

int main() {
    double number; 
    cout << "Please insert number: ";
    cin >> number;
    if (number > 0) {
        cout << "positive";
    }
    else if (number < 0) {
        cout << "negative";
    }
    else {
        cout << "zero";
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
บรรทัดที่ 09-11 : ถ้า number มากกว่า 0 ให้พิมพ์ "positive"
บรรทัดที่ 12-14 : ถ้า number น้อยกว่า 0 ให้พิมพ์ "negative"
บรรทัดที่ 15-17 : ถ้า number เท่ากับ 0 ให้พิมพ์ "zero"

บรรทัดที่ 18 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-18.

Line 6 : declare an double varible name number.
Line 7 : print "Please insert number: ".
Line 8 : Takes double as an input and assigns it to a variable named number.

Line 9-11 : If number is greater than 0, print "positive".
Line 12-14 : If number is less than 0, print "negative".
Line 15-17 : If number is equal to 0, print "zero".
Line 18 : Return 0 means that the program will execute successfully.
*/