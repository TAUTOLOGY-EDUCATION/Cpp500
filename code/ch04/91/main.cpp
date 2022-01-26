#include <iostream>
#include <map>

using namespace std;

void print(auto &a) {
    for (auto i : a) {
        cout << i.first << " : " << i.second << endl;
    }
}

int main() {
    map<string, string> map1;
    string str1, str2;
    cout << "Please insert key: ";
    cin >> str1;
    cout << "Please insert value: ";
    cin >> str2;
    map1[str1] = str2;
    print(map1);
    return 0;
}