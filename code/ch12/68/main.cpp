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
    vector<int> array1 {1, 2, 3, 4};
    vector<string> array2 {"ant", "bird", "cat", "dog"};
    int n = array1.size();
    map<int, string> map1;
    for (int i = 0; i < n; i++) {
        map1[array1[i]] = array2[i];
    }
    print(map1);
    return 0;
}