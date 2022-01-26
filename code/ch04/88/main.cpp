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
    map1["first_name"] = "Jane";
    print(map1);
    return 0;
}