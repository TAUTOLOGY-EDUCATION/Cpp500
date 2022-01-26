#include <iostream>

using namespace std;

int calculateProfit(int sales, int cogs) {
    return sales - cogs;
}

int main() {
    cout << "Gross Profit = " << calculateProfit(5000, 4000);

    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 03 : import library ชื่อ standard namespace

บรรทัดที่ 05 : ประกาศฟังก์ชันชื่อ calculateProfit ที่รับ parameter เป็น sales และ cogs
บรรทัดที่ 06 : return กำไรขั้นต้นจากการหา sales - cogs

บรรทัดที่ 09 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 10 : print ค่าที่ได้จาก calculateProfit(5000, 4000)
บรรทัดที่ 11 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/