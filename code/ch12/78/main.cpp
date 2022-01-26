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
    map<string, string> map3 = {{"name", "Mario"}, {"age", "30"}, {"job", "mushroom picker"}};
    vector<string> array1 = {"first_name", "last_name", "age", "job"};
    int n = array1.size();
    for (int i = 0; i < n; i++) {
        if(map3.find(array1[i]) != map3.end()) {
            map3.erase(array1[i]);
        }
    }
    print(map3);
    return 0;
}
