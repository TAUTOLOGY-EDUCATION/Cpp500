#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]" << endl;
}

int main() {
    vector<string> array3;
    for (int x = 1; x < 26; x++) {
        array3.push_back(to_string(x));
    }
    int n = array3.size();
    for (int i = 0; i < n; i++) {
        if (fmod(sqrt(stoi(array3[i])), 1.0) < 1e-5) {
            array3[i] = "square";
        }
    }
    print(array3);
    return 0;
}