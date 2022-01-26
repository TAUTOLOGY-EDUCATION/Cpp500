#include <iostream>
#include <regex>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]";
}

vector<string> split(string str, string delimiter) {
    vector<string> tokens;
    int pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        tokens.push_back(token);
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens;
}

int main() {
    string string1;
    cout << "Please insert string1: ";
    getline(cin, string1);
    print(split(string1, " "));
    return 0;
}