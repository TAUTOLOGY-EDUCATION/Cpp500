#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> map1 = {{"first_name", "John"}, {"last_name", "Doe"}};
    cout << map1["last_name"] << endl;
    return 0;
}