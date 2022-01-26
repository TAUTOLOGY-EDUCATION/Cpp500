#include <iostream>

using namespace std;

int main() {
    string currency;
    double amount; 
    cout << "Please insert currency: ";
    cin >> currency;
    cout << "Please insert amount: ";
    cin >> amount;
    if (currency == "USD") {
        double THB = amount * 32.5;
        cout << THB;
    }
    else if (currency == "JPY") {
        double THB = amount * 0.29;
        cout << THB;
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ currency เพื่อเก็บสายอักขระ
บรรทัดที่ 07 : สร้างตัวแปรชื่อ amount เพื่อเก็บจำนวนจริง
บรรทัดที่ 08 : พิมพ์ "Please insert currency: "
บรรทัดที่ 09 : รับอินพุตที่เป็นสายอักขระและกำหนดค่าใส่ตัวแปรชื่อ currency
บรรทัดที่ 10 : พิมพ์ "Please insert amount: "
บรรทัดที่ 11 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ amount

บรรทัดที่ 12 : ถ้า currency เป็น "USD" ให้ทำบรรทัดที่ 13-14
บรรทัดที่ 13 : สร้างตัวแปรชื่อ THB และกำหนดค่าเท่ากับ amount*32.5
บรรทัดที่ 14 : พิมพ์ค่า THB ออกมา
บรรทัดที่ 16 : ถ้า currency เป็น "JPY" ให้ทำบรรทัดที่ 17-18
บรรทัดที่ 17 : สร้างตัวแปรชื่อ THB และกำหนดค่าเท่ากับ amount*0.29
บรรทัดที่ 18 : พิมพ์ค่า THB ออกมา

บรรทัดที่ 20 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-21.

Line 6 : declare a string varible name currency
Line 7 : declare a double varible name amount
Line 8 : print "Please insert currency: ".
Line 9 : Takes string as an input and assigns it to a variable named currency.
Line 10 : print "Please insert amount: ".
Line 11 : Takes double as an input and assigns it to a variable named amount.

Line 12 : If currency is "USD", follow line 13-14.
Line 13 : Create a variable named THB and set a value equal to amount*32.5
Line 14 : Print THB.
Line 16 : If currency is "JPY", follow line 17-18.
Line 17 : Create a variable named THB and set a value equal to amount*0.29
Line 18 : Print THB.

Line 20 : Return 0 means that the program will execute successfully.
*/