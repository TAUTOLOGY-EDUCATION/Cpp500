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
    map<int, int> map1;
    for (int i = 0; i < 10; i++) {
        map1[i] = 2 * i;
    }
    print(map1);
    return 0;
}