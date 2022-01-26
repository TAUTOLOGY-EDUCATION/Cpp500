#include <iostream>
#include <vector>
#include <map>

using namespace std;

void print(auto a) {
    for (auto pair: a) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

map<int, int> coinChanger(int amount) {
    vector<int> coinArray {10, 5, 2, 1};
    map<int, int> coinDict;
    for (int c: coinArray) {
        coinDict[c] = amount / c;
        amount = amount - coinDict[c] * c;
    }
    return coinDict;
}   


int main() {
    print(coinChanger(58));
    return 0;
}


/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 03 : import library ชื่อ map
บรรทัดที่ 05 : import library ชื่อ standard namespace

บรรทัดที่ 07 : ประกาศฟังก์ชันชื่อ print ที่รับ parameter เป็น a 
บรรทัดที่ 08-10 : print สมาชิกใน a แต่ละตัว

บรรทัดที่ 13 : ประกาศฟังก์ชันชื่อ coinChanger ที่รับ parameter เป็น amount
บรรทัดที่ 14 : สร้างตัวแปรชื่อ coinArray และกำหนดให้เป็น {10, 5, 2, 1}
บรรทัดที่ 15 : สร้างตัวแปรชื่อ coinDict และกำหนดให้เป็น empty map
บรรทัดที่ 16-19 : คำนวณจำนวนเหรียญที่ต้องใช้สำหรับแลกเหรียญ c นำจำนวนเหรียญไปเก็บใน coin_dict จากนั้นนำมูลค่าที่แลกเหรียญ c ไปหักลบกับ amount
บรรทัดที่ 20 : return coinDict ออกมา

บรรทัดที่ 24 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 25 : print ค่าที่ได้จาก coinChanger(58)
บรรทัดที่ 26 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/