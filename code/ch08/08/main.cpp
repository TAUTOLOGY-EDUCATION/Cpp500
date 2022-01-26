#include <iostream>

using namespace std;

int main() {
    double USD; 
    cout << "Please insert USD: ";
    cin >> USD;
    if (USD > 0) {
        double THB = USD * 32.5;
        cout << THB;
    }
    else {
        cout << "you don't have money";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ USD เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert USD: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ USD
บรรทัดที่ 09 : ถ้า USD มากกว่า 0 ให้ทำบรรทัดที่ 10-11
บรรทัดที่ 10 : สร้างตัวแปรชื่อ THB และกำหนดค่าเท่ากับ USD*32.5
บรรทัดที่ 11 : พิมพ์ค่า THB ออกมา
บรรทัดที่ 13-15 : ถ้า USD น้อยกว่าหรือเท่ากับ 0 ให้พิมพ์ "you don't have money"

บรรทัดที่ 16 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-16.

Line 6 : declare an double varible name USD
Line 7 : print "Please insert USD: ".
Line 8 : Takes double as an input and assigns it to a variable named USD.

Line 9 : If USD is greater than 0, follow line 10-11.
Line 10 : Create a variable named THB and set a value equal to USD*32.5 .
Line 11 : print the value of THB.
Line 13-15 : If USD is less than or equal to 0, print "you don't have money".

Line 16 : Return 0 means that the program will execute successfully.
*/