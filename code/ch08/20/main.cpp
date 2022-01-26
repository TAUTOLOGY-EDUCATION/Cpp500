#include <iostream>

using namespace std;

int main() {
    string gender;
    double weight;
    int height;
    cout << "Please insert gender: ";
    cin >> gender;
    cout << "Please insert weight (kg): ";
    cin >> weight;
    cout << "Please insert height (cm): ";
    cin >> height;
    if (gender == "male") {
        if (weight > height - 100) {
            cout << "Should exercise";
        }
        else {
            cout << "You have a great figure";
        }
    }
    else if (gender == "female") {
        if (weight > height - 110) {
            cout << "Should exercise";
        }
        else {
            cout << "You have a great figure";
        } 
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ gender เพื่อเก็บสายอักขระ
บรรทัดที่ 07 : สร้างตัวแปรชื่อ weight เพื่อเก็บจำนวนจริง
บรรทัดที่ 08 : สร้างตัวแปรชื่อ bill เพื่อเก็บจำนวนเต็ม
บรรทัดที่ 09 : พิมพ์ "Please insert gender: "
บรรทัดที่ 10 : รับอินพุตที่เป็นสายอักขระและกำหนดค่าใส่ตัวแปรชื่อ gender
บรรทัดที่ 11 : พิมพ์ "Please insert weight: "
บรรทัดที่ 12 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ weight
บรรทัดที่ 13 : พิมพ์ "Please insert height: "
บรรทัดที่ 14 : รับอินพุตที่เป็นจำนวนเต็มและกำหนดค่าใส่ตัวแปรชื่อ height

บรรทัดที่ 15 : ถ้า gender เป็น ‘ชาย’ ให้ทำบรรทัดที่ 16-21
บรรทัดที่ 16-18 : ถ้า weight มากกว่า height - 100 ให้พิมพ์ "Should exercise"
บรรทัดที่ 19-21 : ถ้าไม่ใช่ ให้พิมพ์ "You have a great figure"
บรรทัดที่ 23 : ถ้า gender เป็น ‘หญิง’ ให้ทำบรรทัดที่ 24-29
บรรทัดที่ 24-26 : ถ้า weight มากกว่า height - 110 ให้พิมพ์ "Should exercise"
บรรทัดที่ 27-29 : ถ้าไม่ใช่ ให้พิมพ์ "You have a great figure"

บรรทัดที่ 31 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-31.

Line 6 : declare a string varible name gender
Line 7 : declare a double varible name weight
Line 8 : declare a integer varible name height
Line 9 : print "Please insert gender: ".
Line 10 : Takes string as an input and assigns it to a variable named gender.
Line 11 : print "Please insert weight (kg): ".
Line 12 : Takes double as an input and assigns it to a variable named weight.
Line 13 : print "Please insert height (cm): ".
Line 14 : Takes integer as an input and assigns it to a variable named height.

Line 15 : If gender is "male", follow line 16-21.
Line 16-18 : If weight is greater than height - 100. print "Should exercise".
Line 19-21 : Else, print "You have a great figure".
Line 23 : If gender is "female", follow line 24-29.
Line 24-26 : If weight is greater than height - 110. print "Should exercise".
Line 27-28 : Else, print "You have a great figure".

Line 31 : Return 0 means that the program will execute successfully.
*/