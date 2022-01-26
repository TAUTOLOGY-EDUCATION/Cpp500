#include <iostream>

using namespace std;

int main() {
    double bill; 
    cout << "Please insert bill: ";
    cin >> bill;
    double discount;
    if (bill >= 50000) {
        discount = bill * 0.2;
    }
    else if (bill >= 10000) {
        discount = bill * 0.15;
    }
    else if (bill >= 1000) {
        discount = bill * 0.1;
    }
    else {
        discount = 0;
    }
    double pay = bill - discount;
    cout << pay;
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ bill เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert bill: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ bill
บรรทัดที่ 09 : สร้างตัวแปรชื่อ discount เพื่อเก็บจำนวนจริง
บรรทัดที่ 10-12 : ถ้า bill มากกว่าเท่ากับ 1500 ให้คำนวณราคาสินค้าที่ลดไป 20% แล้วเก็บไว้ในตัวแปร discount
บรรทัดที่ 13-15 : ถ้า bill มีค่ามากกว่า 300 แต่ไม่ถึง 1500 ให้คำนวณราคาสินค้าที่ลดไป 15% แล้วเก็บไว้ในตัวแปร discount
บรรทัดที่ 16-18 : ถ้า bill มีค่ามากกว่า 30 แต่ไม่ถึง 300 ให้คำนวณราคาสินค้าที่ลดไป 10% แล้วเก็บไว้ในตัวแปร discount
บรรทัดที่ 19-21 : ถ้า bill น้อยกว่า 30 ให้ discount เป็น 0
บรรทัดที่ 22 : สร้างตัวแปรชื่อ pay และกำหนดค่าเท่ากับ bill - discount
บรรทัดที่ 23 : พิมพ์ค่า pay ออกมา

บรรทัดที่ 24 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-24.

Line 6 : declare a double varible name bill
Line 7 : print "Please insert bill: ".
Line 8 : Takes double as an input and assigns it to a variable named bill.
Line 9 : declare a double varibles name discount

Line 10-12 : If bill is greater than 1,500, calculate the 20% discounted price from the bill and store it in the variable named discount.
Line 13-15 : If bill is greater than 300 but less than 1,500, calculate the 15% discounted price from the bill and store it in the variable named discount.
Line 16-18 :If bill is greater than 30 but less than 300, calculate the 10% discounted price from the bill and store it in the variable named discount.
Line 19-21 : If bill is less than 30, set the discount to 0.
Line 22 : Create a variable named pay and set a value equal to bill - discount
Line 23 : Print pay.

Line 24 : Return 0 means that the program will execute successfully.
*/