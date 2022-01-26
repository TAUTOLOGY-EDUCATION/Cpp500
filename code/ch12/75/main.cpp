#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

void print(auto a) {
    for (auto pair: a) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    map<string, string> map3 = {{"name", "Mario"}, {"age", "30"}, {"job", "mushroompicker"}};
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    bool isStr1InMap3 = false;
    for (auto pair: map3) {
        if (pair.second == str1) {
            isStr1InMap3 = true;
            break;
        }
    }
    if (isStr1InMap3) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}
