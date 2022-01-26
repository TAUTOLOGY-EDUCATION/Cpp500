#include <iostream>

using namespace std;

int main() {
    string order; 
    cout << "Please insert order: ";
    getline(cin, order);
    if (order == "scrambled egg") {
        cout << "recommended to order with boiled egg soup";
    }
    else if (order == "omelet") {
        cout << "recommended to order with egg with tamarind sauce";
    }
    else if (order == "egg Benedict") {
        cout << "recommended to order with spicy fried egg salad";
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
บรรทัดที่ 07 : พิมพ์ "Please insert order: "
บรรทัดที่ 08 : รับอินพุตที่เป็นสายอักขระและกำหนดค่าใส่ตัวแปรชื่อ order

บรรทัดที่ 09-11 : ถ้า order เป็น "scrambled egg" ให้พิมพ์ "recommended to order with boiled egg soup"
บรรทัดที่ 12-14 : ถ้า order เป็น "omelet" ให้พิมพ์ "recommended to order with egg with tamarind sauce"
บรรทัดที่ 15-17 : ถ้า order เป็น "egg Benedict" ให้พิมพ์ "recommended to order with spicy fried egg salad"
บรรทัดที่ 18-20 : ถ้า order เป็นอื่น ๆ ให้พิมพ์ "Our restaurant has only scrambled eggs, omelettes, and eggs Benedict"

บรรทัดที่ 21 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-21.

Line 6 : declare a string varible name order
Line 7 : print "Please insert order: ".
Line 8 : Takes string as an input and assigns it to a variable named order.

Line 9-11 : If order is "scrambled egg", print "recommended to order with boiled egg soup".
Line 12-14 : If order is "omelet", print "recommended to order with egg with tamarind sauce".
Line 15-17 : If order is "egg Benedict", print "recommended to order with spicy fried egg salad".
Line 18-20 : Else, print "Our restaurant has only scrambled eggs, omelettes, and eggs Benedict".

Line 21 : Return 0 means that the program will execute successfully.
*/