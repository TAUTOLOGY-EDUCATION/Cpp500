#include <iostream>

using namespace std;

int main() {
    string str1, str2; 
    cout << "Please insert str1: ";
    cin >> str1;
    cout << "Please insert str2: ";
    cin >> str2;
    if (str1.length() == str2.length()) {
        cout << "same";
    }
    else {
        cout << "not same";
    }
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก

บรรทัดที่ 06 : สร้างตัวแปรชื่อ str1 และ str2 เพื่อเก็บจำนวนจริง
บรรทัดที่ 07 : พิมพ์ "Please insert str1: "
บรรทัดที่ 08 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ str1
บรรทัดที่ 09 : พิมพ์ "Please insert str2: "
บรรทัดที่ 10 : รับอินพุตที่เป็นจำนวนจริงและกำหนดค่าใส่ตัวแปรชื่อ str2
บรรทัดที่ 11-13 : ถ้าความยาว str1 และ str2 เท่ากัน ให้พิมพ์ "same"
บรรทัดที่ 14-16 : ถ้าความยาว str1 และ str2 ไม่เท่ากัน ให้พิมพ์ "not same"

บรรทัดที่ 17 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/

/*
Line 1 : Import the standard input/output stream objects.
Line 3 : Import the standard namespace.
Line 5 : Main function is where your program starts running, follow line 6-17.

Line 6 : declare string varibles name str1, str2
Line 7 : print "Please insert str1: ".
Line 8 : Takes string as an input and assigns it to a variable named str1.
Line 9 : print "Please insert str2: ".
Line 10 : Takes string as an input and assigns it to a variable named str2.

Line 11-13 : If str1 is equal to str2, print "same".
Line 14-16 : If str1 is not equal to str2, print "not same".

Line 17 : Return 0 means that the program will execute successfully.
*/