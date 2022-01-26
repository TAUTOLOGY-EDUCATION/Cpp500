#include <iostream>

using namespace std;

int main() {
    string isMember;
    double bill; 
    cout << "Please insert isMember: ";
    cin >> isMember;
    cout << "Please insert bill: ";
    cin >> bill;
    double discount;
    if (isMember == "yes") {
        if (bill >= 5000) {
            discount = bill * 0.15;
        }
        else if (bill >= 1000) {
            discount = bill * 0.10;
        }
        else if (bill >= 500) {
            discount = bill * 0.05;
        }
        else {
            discount = 0;
        }
        cout << discount;
    }
    else if (isMember == "no") {
        discount = 0;
        cout << discount;
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ isMember เพื่อเก็บสายอักขระ
บรรทัดที่ 07 : สร้างตัวแปรชื่อ bill เพื่อเก็บจำนวนจริง
บรรทัดที่ 08 : พิมพ์ "Please insert isMember: "
บรรทัดที่ 09 : รับอินพุตที่เป็นสายอักขระและกำหนดค่าใส่ตัวแปรชื่อ isMember
บรรทัดที่ 10 : พิมพ์ "Please insert bill: "
บรรทัดที่ 11 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ bill
บรรทัดที่ 12 : สร้างตัวแปรชื่อ discount เพื่อเก็บจำนวนจริง

บรรทัดที่ 13 : ถ้า isMember เป็น "yes" ให้ทำบรรทัดที่ 14-26
บรรทัดที่ 14-16 : ถ้า bill มีค่าตั้งแต่ 5000 ขึ้นไป ให้คำนวณราคาสินค้าที่ลดไป 15% และเก็บไว้ในตัวแปร discount
บรรทัดที่ 17-19 : ถ้า bill มีค่าตั้งแต่ 1000 แต่ไม่ถึง 5000 ให้คำนวณราคาสินค้าที่ลดไป 10% และเก็บไว้ในตัวแปร discount
บรรทัดที่ 20-22 : ถ้า bill มีค่าตั้งแต่ 500 แต่ไม่ถึง 1000 ให้ ให้คำนวณราคาสินค้าที่ลดไป 5% และเก็บไว้ในตัวแปร discount
บรรทัดที่ 23-25 : ถ้า bill น้อยกว่า 500 ให้ discount เป็น 0
บรรทัดที่ 26 : พิมพ์ค่า discount ออกมา
บรรทัดที่ 28-31 : ถ้า isMember เป็น "no" ให้ discount เป็น 0 และ พิมพ์ค่า discount ออกมา

บรรทัดที่ 32 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-31.

Line 6 : declare a string varible name isMember
Line 7 : declare a double varible name bill
Line 8 : print "Please insert isMember: ".
Line 9 : Takes string as an input and assigns it to a variable named isMember.
Line 10 : print "Please insert bill: ".
Line 11 : Takes double as an input and assigns it to a variable named bill.
Line 12 : declare a double varible name discount

Line 13 : If isMember is "yes", follow line 14-26.
Line 14-16 : If bill is greater than or equal to 5,000, calculate the 15% discounted price and store it in the variable named discount.
Line 17-19 : If bill is greater than or equal to 1,000 but less than 5,000, calculate the 10% discounted price and store it in the variable named discount.
Line 20-22 : If bill is greater than or equal to 500 but less than 1,000, calculate the 5% discounted price and store it in the variable named discount.
Line 23-25 : If bill is less than 500, set the discount to 0.
Line 26 : Print discount.
Line 28-31 : If isMember is "no", set the discount to 0 and print the value of discount.

Line 32 : Return 0 means that the program will execute successfully.
*/