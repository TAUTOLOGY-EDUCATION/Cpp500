#include <iostream>
#include <vector>
#include <map>

using namespace std;

void print(auto a) {
    for (auto pair: a) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    vector<string> array1;
    vector<string> array2;
    int n;
    cout << "Please insert n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cout << "Please insert str1: ";
        cin >> str;
        array1.push_back(str);
    }
    for (int i = 0; i < n; i++) {
        string str;
        cout << "Please insert str2: ";
        cin >> str;
        array2.push_back(str);
    }
    map<string, string> map1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            map1[array1[i]] = array2[i];
        else
            map1[array2[i]] = array1[i];
    }
    print(map1);
    return 0;
}