#include <iostream>
#include <map>
#include <vector>

using namespace std;

void print(auto a) {
    for (auto pair: a) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    map<string, int> map1;
    while (map1.size() != 3) {
        string key1;
        cout << "Please insert key: ";
        cin >> key1;
        if (map1.find(key1) != map1.end()) {
            map1.erase(key1);
        }
        else {
            int value1;
            cout << "Please insert value: ";
            cin >> value1;
            map1[key1] = value1;
        }
    }
    print(map1);
    return 0;
}
