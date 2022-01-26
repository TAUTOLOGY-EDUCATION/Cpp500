#include <iostream>

using namespace std;

int main() {
    int hour, minute;
    cout << "Please insert hour: ";
    cin >> hour;
    cout << "Please insert minute: ";
    cin >> minute;
    if (hour < 0  || minute < 0) {
        cout << "please enter a non negative number";
    }
    else {
        if (minute > 0) {
            hour = hour + 1;
        }
        int fee = (hour - 1) * 30;
        cout << fee;
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ hour และ minute เพื่อเก็บจำนวนเต็ม
บรรทัดที่ 07 : พิมพ์ "Please insert hour: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ hour
บรรทัดที่ 09 : พิมพ์ "Please insert minute: "
บรรทัดที่ 10 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ minute
บรรทัดที่ 11-13 : ถ้า hour หรือ minute น้อยกว่า 0 ให้พิมพ์ "please enter a non negative number"
บรรทัดที่ 14 : ถ้าไม่ใช่ให้ทำบรรทัดที่ 15-19
บรรทัดที่ 15-17 : ถ้า minute มากกว่า 0 ให้เพิ่ม hour ขึ้น 1
บรรทัดที่ 18 : สร้างตัวแปรชื่อ fee และกำหนดค่าเท่ากับ (hour - 1)*30
บรรทัดที่ 19 : พิมพ์ค่า fee ออกมา

บรรทัดที่ 21 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-22.

Line 6 : declare integer varibles name hour, minute
Line 7 : print "Please insert hour: ".
Line 8 : Takes integer as an input and assigns it to a variable named hour.
Line 9 : print "Please insert minute: ".
Line 10 : Takes integer as an input and assigns it to a variable named minute.

Line 11-13 : If hour or minute is less than 0, print "please enter a non negative number".
Line 14 : Else, follow line 15-19.
Line 15-17 : If minute is greater than 0, add the value of hour by 1.
Line 18 : Create a variable named fee and set a value equal to (hour - 1)*30.
Line 19 : Print fee.

Line 21 : Return 0 means that the program will execute successfully.
*/