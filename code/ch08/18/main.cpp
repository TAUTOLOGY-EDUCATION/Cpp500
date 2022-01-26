#include <iostream>

using namespace std;

int main() {
    int bill, hour, minute;
    cout << "Please insert bill: ";
    cin >> bill;
    cout << "Please insert hour: ";
    cin >> hour;
    cout << "Please insert minute: ";
    cin >> minute;
    double fee;
    if (minute > 0) { 
        hour = hour + 1;
    }
    if (bill >= 1000) {
        fee = (hour - 4) * 30;
        if (fee < 0) {
            fee = 0;
        }
    }
    else {
        fee = (hour - 1) * 30;
    }
    cout << fee;
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ bill, hour และ minute เพื่อเก็บจำนวนเต็ม
บรรทัดที่ 07 : พิมพ์ "Please insert bill: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ bill
บรรทัดที่ 09 : พิมพ์ "Please insert hour: "
บรรทัดที่ 10 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ hour
บรรทัดที่ 11 : พิมพ์ "Please insert minute: "
บรรทัดที่ 12 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ minute
บรรทัดที่ 13 : สร้างตัวแปรชื่อ fee เพื่อเก็บจำนวนจริง
บรรทัดที่ 14-16 : ถ้า minute มากกว่า 0 ให้เพิ่ม hour ขึ้น 1
บรรทัดที่ 17 : ถ้า bill มากกว่าหรือเท่ากับ 1000 ให้ทำบรรทัดที่ 18-21
บรรทัดที่ 18 : คำนวณค่าจอดรถโดยหักลบ hour ไป 4 ชั่วโมง เก็บไว้ในตัวแปร fee
บรรทัดที่ 19-21 : ถ้า fee น้อยกว่า 0 กำหนดให้ fee เท่ากับ 0
บรรทัดที่ 23 : ถ้า bill น้อยกว่า 1000 ให้ทำบรรทัดที่ 24
บรรทัดที่ 24 : คำนวณค่าจอดรถโดยหักลบ hour ไป 1 ชั่วโมง เก็บไว้ในตัวแปร fee
บรรทัดที่ 26 : พิมพ์ค่า fee ออกมา

บรรทัดที่ 27 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-27.

Line 6 : declare integer varibles name bill, hour, minute
Line 7 : print "Please insert bill: ".
Line 8 : Takes integer as an input and assigns it to a variable named bill.
Line 9 : print "Please insert hour: ".
Line 10 : Takes integer as an input and assigns it to a variable named hour.
Line 11 : print "Please insert minute: ".
Line 12 : Takes integer as an input and assigns it to a variable named minute.
Line 13 : declare a double varibles name fee

Line 14-16 : If minute is greater than 0, add the value of hour by 1.
Line 17 : If bill is greater than or equal to 1,000, follow line 18-21.
Line 18 : Set a variable named fee value equal to hour - 4.
Line 19-21 : If fee is less than 0, set the value to 0.
Line 23 : If bill is less than to 1,000, follow line 24.
Line 24 : Set a variable named fee value equal to hour - 1.
Line 26 : Print fee.

Line 27 : Return 0 means that the program will execute successfully.
*/