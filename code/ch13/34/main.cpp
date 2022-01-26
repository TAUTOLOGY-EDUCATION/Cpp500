#include <iostream>
#include <vector>

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

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]" << endl;
}

vector<bool> isPrimeList(vector<int> arrayA) {
    vector<bool> result;
    for (int a: arrayA) {
        result.push_back(isPrime(a));
    }
    return result;
}

int main() {
    vector<int> A {1, 2, 3, 4, 5};
    print(isPrimeList(A));
    return 0;
}


/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 04 : import library ชื่อ standard namespace

บรรทัดที่ 06 : ประกาศฟังก์ชันชื่อ isPrime ที่รับ parameter num
บรรทัดที่ 07-09 : ถ้า num น้อยกว่าหรือเท่ากับ 1 ให้ return false เพราะ num ไม่เป็น prime number
บรรทัดที่ 10-14 : พิจารณาค่า i ตั้งแต่ 2 ถึง num - 1 ถ้า num หารด้วย i ลงตัว ให้ return false เพราะ num ไม่เป็น prime number
บรรทัดที่ 15 : return true เพราะ num เป็น prime number

บรรทัดที่ 18 : ประกาศฟังก์ชันชื่อ print ที่รับ parameter เป็น a 
บรรทัดที่ 19 : print "["
บรรทัดที่ 20-25 : print สมาชิกใน a แต่ละตัว แล้วคั่นด้วย comma (,)
บรรทัดที่ 26 : print "]"

บรรทัดที่ 29 : ประกาศฟังก์ชันชื่อ isPrimeList ที่รับ parameter arrayA
บรรทัดที่ 30 : สร้างตัวแปรชื่อ result และกำหนดให้เป็น empty array
บรรทัดที่ 31-33 : พิจารณาสมาชิกแต่ละตัวใน arrayA ตรวจสอบจำนวนเฉพาะโดยเรียกใช้ isPrime(a) แล้วนำ a ไปใส่ใน result
บรรทัดที่ 34 : return result ออกมา

บรรทัดที่ 37 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 38 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {1, 2, 3, 4, 5}
บรรทัดที่ 39 : print ค่าที่ได้จาก isPrimeList(A)
บรรทัดที่ 40 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/