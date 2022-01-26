#include <iostream>
#include <map>

using namespace std;

void print(auto &a) {
    for (auto i : a) {
        cout << i.first << " : " << i.second << endl;
    }
}

int main() {
    map<string, string> map1 = {{"first_name", "John"}, {"last_name", "Doe"}};
    map<string, string> map2 = {{"age", "32"}, {"hobby", "coding"}};
    map1.insert(map2.begin(), map2.end());
    print(map1);
    return 0;
}