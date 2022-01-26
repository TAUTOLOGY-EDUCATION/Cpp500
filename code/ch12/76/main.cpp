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
    map<string, string> map3 = {{"name", "Mario"}, {"age", "30"}, {"job", "mushroom picker"}};
    string str1;
    cout << "Please insert str1: ";
    getline(cin, str1);
    for (auto entry: map3) {
        if (entry.second == str1) {
            cout << entry.first << endl;
        }
    }
    return 0;
}
