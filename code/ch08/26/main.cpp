#include <iostream>

using namespace std;

int main() {
    int score; 
    cout << "Please insert score: ";
    cin >> score;
    if (score >= 80) {
        cout << "A";
    }
    else if (score >= 70) {
        cout << "B";
    }
    else if (score >= 60) {
        cout << "C";
    }
    else if (score >= 50) {
        cout << "D";
    }
    else {
        cout << "F";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ score เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert score: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ score

บรรทัดที่ 09-11 : ถ้า score มีค่าตั้งแต่ 80 ขึ้นไป ให้พิมพ์ "A"
บรรทัดที่ 12-14 : ถ้า score มีค่าตั้งแต่ 70 ถึง 79 ให้พิมพ์ "B"
บรรทัดที่ 15-17 : ถ้า score มีค่าตั้งแต่ 60 ถึง 69 ให้พิมพ์ "C"
บรรทัดที่ 18-20 : ถ้า score มีค่าตั้งแต่ 50 ถึง 59 ให้พิมพ์ "D"
บรรทัดที่ 21-23 : ถ้า score มีค่าน้อยกว่า 50 ให้พิมพ์ "F"

บรรทัดที่ 24 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-24.

Line 6 : declare a integer varible name score
Line 7 : print "Please insert score: ".
Line 8 : Takes integer as an input and assigns it to a variable named score.

Line 9-11 : If score is greater than or equal to 80, print "A".
Line 12-14 : If score is greater than or equal to 70 but lower than 80, print "B".
Line 15-17 : If score is greater than or equal to 60 but lower than 70, print "C".
Line 18-20 : If score is greater than or equal to 50 but lower than 60, print "D".
Line 21-23 : Else, print "F".

Line 24 : Return 0 means that the program will execute successfully.
*/