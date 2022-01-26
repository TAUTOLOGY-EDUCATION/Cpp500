#include <iostream>

using namespace std;

int main() {
    string status;
    double distance; 
    cout << "Please insert traffic status: ";
    cin >> status;
    cout << "Please insert distance(km): ";
    cin >> distance;
    if (status == "flow") {
        double cost = distance * 10;
        cout << cost;
    }
    else if (status == "normal") {
        double cost = distance * 12;
        cout << cost;
    }
    else if (status == "dense") {
        double cost = distance * 15;
        cout << cost;
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ status เพื่อเก็บสายอักขระ
บรรทัดที่ 07 : สร้างตัวแปรชื่อ distance เพื่อเก็บจำนวนจริง
บรรทัดที่ 08 : พิมพ์ "Please insert traffic status: "
บรรทัดที่ 09 : รับอินพุตที่เป็นสายอักขระและกำหนดค่าใส่ตัวแปรชื่อ status
บรรทัดที่ 10 : พิมพ์ "Please insert traffic distance: "
บรรทัดที่ 11 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ distance

บรรทัดที่ 12 : ถ้า status เป็น "flow" ให้ทำบรรทัดที่ 13-14
บรรทัดที่ 13-14 : สร้างตัวแปรชื่อ cost เพื่อคำนวณค่าเดินทางตามที่โจทย์กำหนด พิมพ์ค่า cost ออกมา
บรรทัดที่ 16 : ถ้า status เป็น "normal" ให้ทำบรรทัดที่ 17-18
บรรทัดที่ 17-18 : สร้างตัวแปรชื่อ cost เพื่อคำนวณค่าเดินทางตามที่โจทย์กำหนด พิมพ์ค่า cost ออกมา
บรรทัดที่ 20 : ถ้า status เป็น "dense" ให้ทำบรรทัดที่ 21-22
บรรทัดที่ 21-22 : สร้างตัวแปรชื่อ cost เพื่อคำนวณค่าเดินทางตามที่โจทย์กำหนด พิมพ์ค่า cost ออกมา

บรรทัดที่ 24 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-24.

Line 6 : declare a string varible name status
Line 7 : declare a double varible name distance
Line 8 : print "Please insert traffic status: ".
Line 9 : Takes string as an input and assigns it to a variable named status.
Line 10 : print "Please insert distance(km): ".
Line 11 : Takes double as an input and assigns it to a variable named distance.

Line 12 : If status is "flow", follow line 13-14.
Line 13-14 : Create a variable named cost to calculate the travel cost, then print the value of cost.
Line 16 : If status is "normal", follow line 17-18.
Line 17-18 : Create a variable named cost to calculate the travel cost, then print the value of cost.
Line 20 : If status is "dense", follow line 21-22.
Line 21-22 : Create a variable named cost to calculate the travel cost, then print the value of cost.

Line 24 : Return 0 means that the program will execute successfully.
*/