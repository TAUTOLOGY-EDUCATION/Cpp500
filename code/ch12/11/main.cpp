#include <iostream>

using namespace std;

int main() {
    int sumx = 0;
    for (int i = 0; i < 5; i++) {
        int num;
        cout << "Please insert num" << i + 1 << ": ";
        cin >> num;
        sumx += num;
    }
    cout << sumx << endl;
    return 0;
}