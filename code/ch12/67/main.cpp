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
    vector<string> array1 {"one", "two", "three", "four"};
    vector<int> array2 {1, 2, 3, 4};
    int n = array1.size();
    map<string, int> map1;
    for (int i = 0; i < n; i++) {
        map1[array1[i]] = array2[i];
    }
    print(map1);
    return 0;
}