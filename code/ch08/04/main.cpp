#include <iostream>

using namespace std;

int main() {
    int number; 
    cout << "Please insert number: ";
    cin >> number;
    if (number > 0) {
        if (number % 2 == 0) {
            cout << "positive even";
        }
        else {
            cout << "positive odd";
        }
    }
    else if (number < 0) {
        if (number % 2 == 0) {
            cout << "negative even";
        }
        else {
            cout << "negative odd";
        }
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

บรรทัดที่ 09 : ถ้า number มากกว่า 0 ให้ทำบรรทัดที่ 10-15
บรรทัดที่ 10-12 : ถ้า number หารด้วย 2 ลงตัว ให้พิมพ์ "positive even"
บรรทัดที่ 13-15 : ถ้า number หารด้วย 2 ไม่ลงตัว ให้พิมพ์ "positive odd"
บรรทัดที่ 17 : ถ้า number น้อยกว่า 0 ให้ทำบรรทัดที่ 18-23
บรรทัดที่ 18-20 : ถ้า number หารด้วย 2 ลงตัว ให้พิมพ์ "negative even"
บรรทัดที่ 21-23 : ถ้า number หารด้วย 2 ไม่ลงตัว ให้พิมพ์ "negative odd"
บรรทัดที่ 25-27 : ถ้า number เท่ากับ 0 ให้พิมพ์ "zero"

บรรทัดที่ 28 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-28.
Line 6 : declare an interger varible name number.
Line 7 : print "Please insert number: ".
Line 8 : Takes integer as an input and assigns it to a variable named number.

Line 9 : If number is greater than 0, follow line 10-15.
Line 10-12 : If number is divisible by 2, print "positive even".
Line 13-15 : If number is not divisible by 2, print "positive odd".
Line 17 : If number is less than 0, follow line 18-23.
Line 18-20 : If number is divisible by 2, print "negative even".
Line 21-23 : If number is not divisible by 2, print "negative odd".
Line 25 : If number is equal to 0, print "zero".

Line 28 : Return 0 means that the program will execute successfully.
*/