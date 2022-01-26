#include <iostream>

using namespace std;

int main() {
    int score; 
    cout << "Please insert score: ";
    cin >> score;
    if (score >= 50) {
        cout << "Pass";
    }
    else {
        cout << "Fail";
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

บรรทัดที่ 09-11 : ถ้า score มากกว่าหรือเท่ากับ 50 ให้พิมพ์ "Pass"
บรรทัดที่ 12-14 : ถ้า score น้อยกว่า 50 ให้พิมพ์ "Fail"

บรรทัดที่ 15 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-15.

Line 6 : declare a integer varible name score
Line 7 : print "Please insert score: ".
Line 8 : Takes integer as an input and assigns it to a variable named score.

Line 9-11 : If score is greater than or equal to 50, print "Pass".
Line 12-13 : If score is less than 50, print "Fail".

Line 15 : Return 0 means that the program will execute successfully.
*/