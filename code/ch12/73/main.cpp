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
    map<string, string> map2 = {{"apple", "52 kcal"}, {"banana", "132 kcal"}, {"carrot", "46 kcal"}};
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    if (map2.find(str1) != map2.end()) {
        cout << map2[str1] << endl;
    }
    else {
        map2[str1] = "wait for assignment";
        print(map2);
    }
    return 0;
}
