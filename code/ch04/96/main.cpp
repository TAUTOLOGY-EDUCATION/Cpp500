#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> map1 = {{"first_name", "John"}, {"last_name", "Doe"}, {"age", "32"}};
    string str1;
    cout << "Please insert str1: ";
    cin >> str1;
    cout << (map1.find(str1) != map1.end()) << endl;
    return 0;
}