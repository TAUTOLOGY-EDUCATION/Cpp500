#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> map1 = {{"first_name", "John"}, {"last_name", "Doe"}};
    for (auto i : map1) {
        cout << i.second << endl;
    }
    return 0;
}