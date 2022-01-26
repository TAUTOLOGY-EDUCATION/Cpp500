#include <iostream>
#include <vector>

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

int main() {
    vector<string> array2;
    string str1, str2, str3;
    cout << "Please insert first element: ";
    cin >> str1;
    cout << "Please insert second element: ";
    cin >> str2;
    cout << "Please insert third element: ";
    cin >> str3;
    array2.push_back(str1);
    array2.push_back(str2);
    array2.push_back(str3);
    print(array2);
    return 0;
}