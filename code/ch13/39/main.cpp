#include <iostream>
#include <vector>
#include <map>

using namespace std;

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

void keyAndValue(map<string, string> mapA, vector<string> &key, vector<string> &value) {
    for (auto a: mapA) {
        key.push_back(a.first);
        value.push_back(a.second);
    }
}   

int main() {
    map<string, string> A = {{"name", "John"}, {"sex", "male"}};
    vector<string> key, value;
    keyAndValue(A, key, value);
    print(key);
    print(value);
    return 0;
}

/*
บรรทัดที่ 01 : import library ชื่อ iostream
บรรทัดที่ 02 : import library ชื่อ vector
บรรทัดที่ 03 : import library ชื่อ map
บรรทัดที่ 05 : import library ชื่อ standard namespace

บรรทัดที่ 07 : ประกาศฟังก์ชันชื่อ print ที่รับ parameter เป็น a 
บรรทัดที่ 08 : print "["
บรรทัดที่ 09-14 : print สมาชิกใน a แต่ละตัว แล้วคั่นด้วย comma (,)
บรรทัดที่ 15 : print "]"

บรรทัดที่ 18 : ประกาศฟังก์ชันชื่อ keyAndValue ที่รับ parameter เป็น mapA, key และ value
บรรทัดที่ 19 : พิจารณา map แต่ละ element ใน mapA
บรรทัดที่ 20 : นำ key ของ mapA ไปใส่ใน array ชื่อ key
บรรทัดที่ 21 : นำ value ของ mapA ไปใส่ใน array ชื่อ value

บรรทัดที่ 25 : ฟังก์ชัน main โปรแกรมจะเริ่มรันฟังก์ชันนี้เป็นฟังก์ชันแรก
บรรทัดที่ 26 : สร้างตัวแปรชื่อ A และกำหนดให้เป็น {{"name": "John"}, {"sex": "male"}}
บรรทัดที่ 27 : สร้างตัวแปรชื่อ key และ value
บรรทัดที่ 28 : เรียกใช้ฟังก์ชัน keyAndValue(A, key, value);
บรรทัดที่ 29 : print key
บรรทัดที่ 30 : print value
บรรทัดที่ 31 : return 0 เพื่อบอกว่าโปรแกรมรันสำเร็จ
*/