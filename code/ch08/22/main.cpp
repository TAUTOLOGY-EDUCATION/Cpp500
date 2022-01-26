#include <iostream>

using namespace std;

int main() {
    double velocity; 
    cout << "Please insert velocity(km/hr): ";
    cin >> velocity;
    if (velocity > 120) {
        cout << "fine 1,000 Baht";
    }
    else if (velocity > 80) {
        cout << "fine 500 Baht";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ velocity เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert velocity(km/hr): "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ velocity

บรรทัดที่ 09-11 : ถ้า velocity มากกว่า 120 ให้พิมพ์ "fine 1,000 Baht"
บรรทัดที่ 12-14 : ถ้า velocity มากกว่า 80 แต่ไม่ถึง 120 ให้พิมพ์ "fine 500 Baht"

บรรทัดที่ 15 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-15.

Line 6 : declare a double varible name velocity
Line 7 : print "Please insert velocity(km/hr): ".
Line 8 : Takes double as an input and assigns it to a variable named velocity.

Line 9-11 : If velocity is greater than 85, print "fine $70".
Line 12-14 : If velocity is greater than 70 but less than 85, print "fine $35".

Line 15 : Return 0 means that the program will execute successfully.
*/