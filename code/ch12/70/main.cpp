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
    vector<int> array2;
    int n;
    cout << "Please insert n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cout << "Please insert str: ";
        cin >> str;
        array1.push_back(str);
    }
    for (int i = 0; i < n; i++) {
        int numeric;
        cout << "Please insert numeric: ";
        cin >> numeric;
        array2.push_back(numeric);
    }
    map<string, int> map1;
    for (int i = 0; i < n; i++) {
        map1[array1[i]] = array2[i];
    }
    print(map1);
    return 0;
}