#include <iostream>

using namespace std;

int main() {
    double listenTime; 
    cout << "Please insert listen time(hour): ";
    cin >> listenTime;
    if (listenTime > 4) {
        cout << "Listening to music for too long may harm your ears";
    }
    else {
        cout << "Have fun listening to music";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ listenTime เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert listen time(hour): "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ listenTime

บรรทัดที่ 09-11 : ถ้า listenTime มากกว่า 4 ให้พิมพ์ "Listening to music for too long may harm your ears"
บรรทัดที่ 12-14 : ถ้าไม่ใช่ ให้พิมพ์ "Have fun listening to music"

บรรทัดที่ 15 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-15.

Line 6 : declare a double varible name listenTime
Line 7 : print "Please insert listen time(hour): ".
Line 8 : Takes double as an input and assigns it to a variable named listenTime.

Line 9-11 : If listenTime is greater than 4, print "Listening to music for too long may harm your ears".
Line 12-14 : Else, print "Have fun listening to music".

Line 15 : Return 0 means that the program will execute successfully.
*/