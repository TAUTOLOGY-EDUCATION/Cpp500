#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> array2 {'a', 'l', 'l', 'i', 'g', 'a', 't', 'o', 'r'};
    char char1;
    cout << "Please insert char1: ";
    cin >> char1;
    int n = array2.size();
    for (int i = 0; i < n; i++) {
        if (array2[i] == char1) {
            cout << i << endl;
        }
    }
    return 0;
}