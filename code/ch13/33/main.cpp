#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << isPrime(37);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ isPrime ที่รับ parameter num
บรรทัดที่ 06-08 : ถ้า num น้อยกว่าหรือเท่ากับ 1 ให้ return false เพราะ num ไม่เป็น prime number
บรรทัดที่ 09-13 : พิจารณาค่า i ตั้งแต่ 2 ถึง num - 1 ถ้า num หารด้วย i ลงตัว ให้ return false เพราะ num ไม่เป็น prime number
บรรทัดที่ 14 : return true เพราะ num เป็น prime number

บรรทัดที่ 17 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 18 : print ค่าที่ได้จาก isPrime(37)
บรรทัดที่ 19 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/