#include <iostream>

using namespace std;

int main() {
    double THB; 
    cout << "Please insert THB: ";
    cin >> THB;
    if (THB > 0) {
        double USD = THB / 32.8;
        double bankProfit = USD * 0.3;
        cout << "USD: " << USD << endl;
        cout << "profit: " << bankProfit << endl;
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

บรรทัดที่ 06 : สร้างตัวแปรชื่อ THB เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert THB: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ THB
บรรทัดที่ 09 : ถ้า THB มากกว่า 0 ให้ทำบรรทัดที่ 10-13
บรรทัดที่ 10 : สร้างตัวแปรชื่อ USD และกำหนดค่าเท่ากับ THB/32.8
บรรทัดที่ 11 : สร้างตัวแปรชื่อ bank_profit และกำหนดค่าเท่ากับ USD*0.3
บรรทัดที่ 12 : พิมพ์ค่า USD ออกมา
บรรทัดที่ 13 : พิมพ์ค่า bank_profit ออกมา
บรรทัดที่ 15-17 : ถ้า THB น้อยกว่าหรือเท่ากับ 0 ให้พิมพ์ "you don't have money"

บรรทัดที่ 18 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-18.

Line 6 : declare an double varible name THB
Line 7 : print "Please insert THB: ".
Line 8 : Takes double as an input and assigns it to a variable named THB.

Line 9 : If THB is greater than 0, follow line 10-13.
Line 10 : Create a variable named USD and set a value equal to THB/32.8
Line 11 : Create a variable named bankProfit and set a value equal to USD*0.3
Line 12 : print the value of USD.
Line 13 : print the value of bankProfit.
Line 15-17 : If THB is less than or equal to 0, print "you don't have money".

Line 18 : Return 0 means that the program will execute successfully.
*/