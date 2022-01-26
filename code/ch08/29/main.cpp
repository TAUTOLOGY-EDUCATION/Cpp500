#include <iostream>

using namespace std;

int main() {
    string order;
    int amount; 
    cout << "Please insert order: ";
    getline(cin, order);
    cout << "Please insert amount: ";
    cin >> amount;
    if (order == "scrambled egg") {
        int cost = amount * 7;
        cout << cost;
    }
    else if (order == "omelet") {
        int cost = amount * 10;
        cout << cost;
    }
    else if (order == "egg Benedict") {
        int cost = amount * 5;
        cout << cost;
    }
    else {
        cout << "Our restaurant has only scrambled eggs, omelettes, and eggs Benedict";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ order เพื่อเก็บสายอักขระ
บรรทัดที่ 07 : สร้างตัวแปรชื่อ amount เพื่อเก็บจำนวนเต็ม
บรรทัดที่ 08 : พิมพ์ "Please insert order: "
บรรทัดที่ 09 : รับอินพุตที่เป็นสายอักขระและกำหนดค่าใส่ตัวแปรชื่อ order
บรรทัดที่ 10 : พิมพ์ "Please insert amount: "
บรรทัดที่ 11 : รับอินพุตที่เป็นจำนวนเต็มและกำหนดค่าใส่ตัวแปรชื่อ amount

บรรทัดที่ 12 : ถ้า order เป็น "scrambled egg" ให้ทำบรรทัดที่ 13-14
บรรทัดที่ 13 : สร้างตัวแปรชื่อ cost และกำหนดค่าเท่ากับ amount*7
บรรทัดที่ 14 : พิมพ์ค่า cost ออกมา
บรรทัดที่ 16 : ถ้า order เป็น "omelet" ให้ทำบรรทัดที่ 17-18
บรรทัดที่ 17 : สร้างตัวแปรชื่อ cost และกำหนดค่าเท่ากับ amount*10
บรรทัดที่ 18 : พิมพ์ค่า cost ออกมา
บรรทัดที่ 20 : ถ้า order เป็น "egg Benedict" ให้ทำบรรทัดที่ 21-22
บรรทัดที่ 21 : สร้างตัวแปรชื่อ cost และกำหนดค่าเท่ากับ amount*5
บรรทัดที่ 22 : พิมพ์ค่า cost ออกมา
บรรทัดที่ 24-26 : ถ้า order เป็นอื่น ๆ ให้พิมพ์ "Our restaurant has only scrambled eggs, omelettes, and eggs Benedict"

บรรทัดที่ 27 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-27.

Line 6 : declare a string varible name order
Line 7 : declare a integer varible name amount
Line 8 : print "Please insert order: ".
Line 9 : Takes string as an input and assigns it to a variable named order.
Line 10 : print "Please insert amount: ".
Line 11 : Takes integer as an input and assigns it to a variable named amount.

Line 12 : If order is "scrambled egg", follow line 13-14.
Line 13 : Create a variable named cost and set a value equal to amount*7.
Line 14: Print cost.
Line 16 : If order is "omelet", follow line 17-18.
Line 17 : Create a variable named cost and set a value equal to amount*10.
Line 18 : Print cost.
Line 20 : If order is "egg Benedict", follow line 21-22.
Line 21 : Create a variable named cost and set a value equal to amount*5.
Line 22 : Print cost.
Line 24-26 : Else, print "Our restaurant has only scrambled eggs, omelettes, and eggs Benedict".

Line 27 : Return 0 means that the program will execute successfully.
*/