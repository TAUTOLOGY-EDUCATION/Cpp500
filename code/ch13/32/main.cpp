#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <utility> 

using namespace std;

double findMean(vector<int> arrayA) {
    double sum = 0;
    for (int i: arrayA) {
        sum += i;
    }
    return sum / arrayA.size();
}

double findMedian(vector<int> arrayA) {
    sort(arrayA.begin(), arrayA.end());
    if (arrayA.size() % 2 == 1) {
        return arrayA[arrayA.size() / 2];
    }
    return (arrayA[(arrayA.size() - 1) / 2] + arrayA[arrayA.size() / 2]) / 2.0;
}

double findMode(vector<int> arrayA) {
    map<int, int> count;
    for (int i: arrayA) {
        count[i]++;
    }
    pair<int, int> mode = make_pair(-1, -1);
    for (auto i: count) {
        if (i.second > mode.second) {
            mode = i;
        }
    }
    return mode.first;
}

int main() {
    vector<int> A {1, 2, 2, 3, 4};
    cout << "mean = " << findMean(A) << endl;
    cout << "median = " << findMedian(A) << endl;
    cout << "mode = " << findMode(A) << endl;
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 03 : import library ชื่อ map
บรรทัดที่ 04 : import library ชื่อ algorithm
บรรทัดที่ 05 : import library ชื่อ utility
บรรทัดที่ 07 : import library ชื่อ standard namespace

บรรทัดที่ 09 : ประกาศฟังก์ชันชื่อ findMean ที่รับ parameter เป็น arrayA
บรรทัดที่ 10 : สร้างตัวแปรชื่อ sum และกำหนดให้เป็น 0
บรรทัดที่ 11-13 : หาผลรวมของสมาชิกแต่ละตัวใน arrayA เก็บไว้ใน sum
บรรทัดที่ 14 : หาค่า mean แล้ว return mean ออกมา

บรรทัดที่ 17 : ประกาศฟังก์ชันชื่อ findMedian ที่รับ parameter เป็น arrayA
บรรทัดที่ 18 : เรียงลำดับ arrayA จากน้อยไปมาก
บรรทัดที่ 19-21 : ถ้า arrayA มีจำนวนสมาชิกเป็นเลขคี่ ให้ return สมาชิกตรงกลางของ arrayA ออกมา
บรรทัดที่ 22 : ถ้า arrayA มีจำนวนสมาชิกเป็นเลขคู่ ให้ return ค่าเฉลี่ยของสมาชิก 2 ตัวตรงกลาง

บรรทัดที่ 25 : ประกาศฟังก์ชันชื่อ findMode ที่รับ parameter เป็น arrayA
บรรทัดที่ 26 : สร้างตัวแปรชื่อ count และกำหนดให้เป็น empty map
บรรทัดที่ 27-29 : หาความถี่ของสมาชิกแต่ละตัวใน arrayA เก็บไว้ใน count
บรรทัดที่ 30-35 : หา mode โดยดูจากสมาชิกของ arrayA ที่มีความถี่สูงสุด
บรรทัดที่ 36 : return mode ออกมา

บรรทัดที่ 39 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 40 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {1, 2, 2, 3, 4}
บรรทัดที่ 41 : print ค่า mean
บรรทัดที่ 42 : print ค่า median
บรรทัดที่ 43 : print ค่า mode
บรรทัดที่ 44 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/