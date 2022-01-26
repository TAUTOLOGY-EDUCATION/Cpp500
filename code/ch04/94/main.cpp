#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> map1 = {{"first_name", "John"}, {"last_name", "Doe"}, {"age", "32"}};
    cout << map1.size() << endl;
    return 0;
}